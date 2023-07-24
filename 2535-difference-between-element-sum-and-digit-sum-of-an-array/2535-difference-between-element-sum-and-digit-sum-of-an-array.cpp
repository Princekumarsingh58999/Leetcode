class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int p=0, q=0;
       for(int i : nums){
           q+=i;
           while(i){
           p+=i%10;
        i=i/10;
       }
        }
        return abs(p-q);
    }
};