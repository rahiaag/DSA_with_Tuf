/*class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n=nums.size();
      int j=0;
      for (int i=1;i<n;i++){
        if (nums[j]!=nums[i]){
            j++;
            nums[j]=nums[i];
        }
      }
      return j+1;
    }
};

/*
when relative order is not the problem
set
two pointer
stack
unordered_map

when relative order is the problem,in place
two pointer
*/
class Solution {
  public:
    int removeDuplicates(vector<int> &arr) {
        int n=arr.size();
        stack<int>st;
        st.push(arr[0]);
        for (int i=1;i<n;i++){
            if (st.top()!=arr[i]){
                st.push(arr[i]);
            }
        }
         int k = st.size();
        for (int i = k - 1; i >= 0; i--) {
            arr[i] = st.top();
            st.pop();
        }
        return k;
    }
};