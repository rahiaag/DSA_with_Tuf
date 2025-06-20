// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int n=arr.size();
        int floor=-1;
        int ceil=-1;
        
        for (int i=0;i<n;i++){
            if (arr[i]<=x){
                floor=max(floor,arr[i]);
            }
            if (arr[i]>=x){
                if (ceil==-1){
                    ceil=arr[i];
                }
                else{
                ceil=min(ceil,arr[i]);
            }
        }
        }
        return {floor,ceil};
        
    }
};

// if duplicates are present then we are not considering it
/*
Brute Force Approach 
sort the array and then find the element and return the previous and next index of it 
case 1 maybe previous and next index is not present;
case 2 maybe duplicates are present so we will also check that condition as well

2ND Using inbuilt function



*/