class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int a[2]={};
        int count=0, s=0;
        for(auto i: position){
            ++a[i%2];
           
    }
         return min(a[0],a[1]);
    }
};