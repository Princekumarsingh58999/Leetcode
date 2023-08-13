class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int p;
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(i%10==nums[i]){
                p=i;
                flag=1;
                break;
            }
        }
        if(flag==1)
          return p;
        else return -1;
    }
};