class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
       
        for(auto i : nums)
        { int count=0;
            for(auto j : nums){
                if(i>j)
                  count++; 
            }
             v.push_back(count);
        }           
       return v; 
    }
};