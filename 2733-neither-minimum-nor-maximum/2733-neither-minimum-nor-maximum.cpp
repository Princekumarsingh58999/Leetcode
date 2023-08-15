class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        if(n<=2)
            return -1;
        else if(n%2==0)
        return nums[n/2-1];
        else return nums[n/2];
    }
};