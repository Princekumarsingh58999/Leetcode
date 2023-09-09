class Solution {
public:
    int triangularSum(vector<int>& nums) {
//         int p=0;
        int n=nums.size();
//         for(int i=0;i<n;i++){
//             if(n==1)
//                 return nums[0];
//            else if(i==n-1){
//                 i=0;
//             n=n-1;}
//             else{
//             nums[i]=(nums[i]+nums[i+1])%10;
               
//                     p=nums[i];}
//         }
//             return p; 
//     }
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
            nums[j]=(nums[j]+nums[j+1])%10;   
        }
    }
    return nums[0];}
    
};