class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int temp=n;
        int count=0;
        
        while (temp){
            int digit=temp%10;
            if (digit!=0 && n%digit==0){
                count++;
            }
            temp/=10;
        }
        return count;
    }
};

// Logically correct but not refactored

/*
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    
    vector<int> func(int n){
        int temp=n;
        int result=0;
        vector<int>vec;
        while (temp){
            int value=temp%10;
            vec.push_back(value);
            temp/=10;3w
        }
        return vec;
    }
    
    int evenlyDivides(int n) {
        
        vector<int>result=func(n);
        int count=0;
        
        for (int i=0;i<result.size();i++){
            if (result[i]==0){
                continue;
            }
            else{
                if (n%result[i]==0){
                    count++;
                }
            }
        }
        return count;
    }
};

*/
