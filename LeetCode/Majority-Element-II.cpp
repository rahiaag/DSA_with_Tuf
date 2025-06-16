class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count1=0;
        int count2=0;

        int element1=0;
        int element2=0;

        for (int i=0;i<n;i++){
            if (count1==0 && nums[i]!=element2){
                count1=1;
                element1=nums[i];
            }
            else if (count2==0 && nums[i]!=element1){
                count2=1;
                element2=nums[i];
            }
            else if (element1==nums[i])count1++;
            else if (element2==nums[i])count2++;
            else{
                count1--;
                count2--;
            }
        }

        vector<int>result;
        count1=0;
        count2=0;

        for (int i=0;i<n;i++){
            if (element1==nums[i]){
                count1++;
            }
            else if (element2==nums[i]){
                count2++;
            }
        }

        if (count1>n/3){
            result.push_back(element1);
        }
        if (count2>n/3){
            result.push_back(element2);
        }
        return result;
    }
};

       /*vector<int>ans;
       int n=nums.size();

       unordered_map<int,int>mp;

       for (auto i:nums){
        mp[i]++;
       }

       for (auto i:mp){
        if (i.second>n/3){
            ans.push_back(i.first);
        }
       }
       return ans;
        */

        
//2nd appraoch
         /* int count=0;
        int n=nums.size();
        vector<int>ans;

        sort (nums.begin(),nums.end());
        for (int i=1;i<nums.size();i++){
            if (nums[i]==nums[i-1]){
                count++;
            }
             if (count>=n/3){
                ans.push_back(nums[i]);
             }
           

        }
        return ans;*/

    
       
  

/*

  int n=nums.size();
        vector<int> ans;

        unordered_map<int,int>mp;

        for (auto i:nums){
            mp[i]++;
        }

        for (auto i:mp){
            if (i.second>n/3)
            ans.push_back(i.first);
        }
        return ans;
        */