class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
       
        int max1=0;
        for(int i: nums){
           max1=max(max1, i); 
        }
   return (k*max1+((k-1)*k)/2);
    }
};