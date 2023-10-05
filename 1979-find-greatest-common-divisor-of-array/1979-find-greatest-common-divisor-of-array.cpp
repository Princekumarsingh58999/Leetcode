class Solution {
public:
    int findGCD(vector<int>& nums) {
    //     int mx=INT_MAX;
    //     int mn=INT_MIN;
    //     for(int i=0;i<nums.size();i++){
    //        mx=max(mx,nums[i]); 
    //         mn=min(mn,nums[i]);
    //     }
    //     return gcd(mx,mn);
    // }
    // int maxi=INT_MIN,mini=INT_MAX;
    //      for(int i=0;i<nums.size();i++){
    //        maxi=max(maxi,nums[i]);
    //        mini=min(mini,nums[i]);
    //      }
    //      return gcd(maxi,mini);
    // }
    return gcd(*max_element(nums.begin(),nums.end()), *min_element(nums.begin(),nums.end()));
             }                                                             
};