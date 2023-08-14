class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(), nums.end());
         for(int i=0;i<nums.size();i++){
             v.push_back(nums[i]);}
        return v;
    }
};