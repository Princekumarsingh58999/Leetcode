class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums;
        // vector<int>v;
        // int min=0;
        // for(int i=0;i<nums.size();i++){
        //     if(min<=nums[i]){
        //         min=nums[i];
        //        v.push_back(min);
        //         }}
        // return v;
    }
};