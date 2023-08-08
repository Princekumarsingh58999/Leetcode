class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        map<int, int>mp;
        for(auto i:nums)
            mp[i]++;
        for(auto m:mp)
            if(m.second==1)
              sum+=m.first;
        return sum;
//         int sum=0;
//         int a[101]={};
//         for(auto p : nums)
//             ++a[p];
//         for(auto i=1;i<=100;++i){
//            if(a[i]==1)
//                     sum+=i;}
//         return sum;
        
    }
};
  // int cnt[101] = {}, res = 0;
  //   for (auto n : nums)
  //       ++cnt[n];
  //   for (auto i = 1; i <= 100; ++i)
  //       if (cnt[i] == 1)
  //           res += i;
  //   return res;