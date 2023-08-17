class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v, v1, v2;
        int n=nums.size();
        for(auto i:nums){
            if(i>0)
            v1.push_back(i);
            else if(i<0)
                v2.push_back(i);
        }
        for(int i=0;i<v2.size();i++){
                v.push_back(v1[i]);
                v.push_back(v2[i]);    
        }
       
        return v;
    }
};