class Solution {
public:
int maxEle(vector<int>&nums,int i,int j){
    int ele=*max_element(nums.begin()+i,nums.begin()+(j+1));
    return ele;
}
int minEle(vector<int>&nums,int i,int j){
    int ele=*min_element(nums.begin()+i,nums.begin()+(j+1));
    return ele;
}
    double minimumAverage(vector<int>& nums) {

        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<double>val;

        for (int i=0;i<n/2;i++){
            int maxi=maxEle(nums,i,n-1-i);
            int mini=minEle(nums,i,n-1-i);

            val.push_back((maxi+mini)/2.0);
        }

        sort(val.begin(),val.end());
        return val[0];
    }
};