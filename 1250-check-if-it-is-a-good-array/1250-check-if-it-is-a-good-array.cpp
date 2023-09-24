class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
       int mx=0;
        for(auto i:nums){
            mx=gcd(mx,i);
                if(mx==1)
                    return mx;
        }
        return false;
    }
};