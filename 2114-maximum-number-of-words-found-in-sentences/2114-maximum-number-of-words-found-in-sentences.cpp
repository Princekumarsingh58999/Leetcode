class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
         int res = 0;
        for (auto const &s: sentences) {
            int n = count(s.begin(), s.end(), ' ');
            res = max(res, n + 1);
        }
        return res;
    }
//         int mx=0;
//         for(auto const &p:sentences){
//             int  n=(p.begin(), p.end(), ' ');
//              mx=max(mx, n+1);
//         }
//         return mx;
               
    
};
