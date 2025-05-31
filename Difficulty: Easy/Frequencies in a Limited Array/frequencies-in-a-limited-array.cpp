/*class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        int n=arr.size();
        vector<int>freq;
        
        /* vector<int>freq(n) when we do this so it occupies the n space in vector
         so if we push back any value then it will be start inserting from the position 
         n+1 so from here we just need to use freq[i]
        
        unordered_map<int,int>mp;
        for (auto i:arr){
            mp[i]++;
        }
        
        for (int i=1;i<=n;i++){
            freq.push_back(mp[i]);
        }
        return freq;
        
    }
};
*/
class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        int n = arr.size();

        // Step 1: Decrease all values by 1 so they fall in range 0 to n-1
        for (int i = 0; i < n; i++) {
            arr[i] = arr[i] - 1;
        }

        // Step 2: Use elements as index and add n to that index
        for (int i = 0; i < n; i++) {
            int index = arr[i] % n;
            arr[index] += n;
        }

        // Step 3: Extract the frequencies
        for (int i = 0; i < n; i++) {
            arr[i] = arr[i] / n;
        }

        return arr;
    }
};

