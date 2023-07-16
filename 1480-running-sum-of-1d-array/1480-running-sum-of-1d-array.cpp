class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
     vector<int> v;
        int p=0;
        for(int i=0;i<nums.size();i++){
           v.push_back(p=nums[i]+p);
           
        }
         return v;
    }
};