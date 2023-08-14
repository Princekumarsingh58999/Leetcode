class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
//         int a[2]={};
//         int count=0, s=0;
//         for(auto i: position){
//             ++a[i%2];
           
//     }
//          return min(a[0],a[1]);
//     }
    int even=0;
    int odd=0;
    for(int i=0;i<position.size();i++){
        if(position[i]%2==0)
            even++;
        else 
            odd++;
    }
    if(even>odd)
        return odd;
    else return even;
    }
};