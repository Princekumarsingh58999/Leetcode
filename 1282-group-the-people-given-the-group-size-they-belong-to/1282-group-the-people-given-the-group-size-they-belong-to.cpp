class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
//          int n=groupSizes.size();
//          int p=1;
//         vector<vector<int>>v;
        
//        vector<int>v1;
//         for(int i=0;i<n;i++){
             
//             for(int j=0;j<n;j++){
//             if(groupSizes[j]==p){
//                 v1.push_back(j); 
               
//             }  
//             }
//             p++;
            
//             }
//         v.push_back(v1);
            
        
//         return v;
    vector<vector<int>>p;
    map<int, vector<int>>mp;
    for(int i=0;i<groupSizes.size();i++){
       mp[groupSizes[i]].push_back(i);
        if(mp[groupSizes[i]].size()==groupSizes[i]){
            p.push_back(mp[groupSizes[i]]);
        mp[groupSizes[i]]={};}
    }
    return p;
    }
    };