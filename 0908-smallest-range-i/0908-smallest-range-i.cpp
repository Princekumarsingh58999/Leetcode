class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//         if(nums.size()==1)
//             return 0;
       
//             int p=nums[0]+k;
//            int  q=nums[n-1]-k;
//              if(p<=q)
//                 return q-p;
//             else return 0;
        
        int p=*max_element(nums.begin(),nums.end());
        int q=*min_element(nums.begin(),nums.end());
        return max(0,((p-k)-(q+k)));
        
    }
};