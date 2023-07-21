class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> v;
        int n=nums.size();
       
       for(int i=0;i<n;i++){
             v.insert(v.begin()+index[i],nums[i]);
        }
        return v;
    }
};