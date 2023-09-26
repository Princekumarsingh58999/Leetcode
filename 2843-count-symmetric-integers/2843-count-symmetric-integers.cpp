class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
//         int ans=0;
//         for(int i=low;i<=high;++i){
//             int p=i;
//             int sum=0;
//             string s=to_string(p);
//             int n=s.size();
//             for(int j=0;j<n/2;++i){
//                 sum+=s[j]-s[n/2-j-1];
//             }
//             if(sum==0 && n%2==0)
//                 ans++;
//         }
//         return ans;
        
        
        
         int ans = 0;
    for(int i = low; i <= high; ++i){
        string s = to_string(i);
        int t = 0, n = s.size();
        for(int j = 0; j < n/2; ++j) { t += s[j] - s[n - j - 1]; }
        if(n%2 == 0 && t == 0) ans++;
    }
    return ans;
    }
};