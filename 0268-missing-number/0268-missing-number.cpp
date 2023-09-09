class Solution {
public:
    int missingNumber(vector<int>& nums) {
      //   int p=0;
      //   int flag=0;
      // sort(nums.begin(),nums.end());
        int n=nums.size();
      //   for(int i=0;i<n;i++){
      //       if(nums[i]!=i){
      //           p=i;
      //           flag=1;
      //           break;
      //       }
      //   }
      //   if(flag==0)
      //       return n;
      //   else
      //   return p;
        
        int sum=0;
        int total=(n*(n+1))/2;
        for(auto num:nums)
            sum+=num;
        return total-sum;
    }
};