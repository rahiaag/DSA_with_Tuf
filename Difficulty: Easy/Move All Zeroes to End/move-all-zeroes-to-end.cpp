// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n=arr.size();
        int j=0;
        
        for (int i=0;i<n;i++){
            if (arr[i]!=0){
                arr[j]=arr[i];
                j++;
            }
        }
        for (int i=j;i<n;i++){
            arr[i]=0;
        }
    }
};

/*
approaches 
count the number of zero and after that put all zeros till end and number in front

2) Two pointer
*/