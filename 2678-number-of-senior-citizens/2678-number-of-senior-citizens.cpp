class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        int count=0;
      for(auto d:details){
            ans=((d[11]-'0')*10 + d[12]-'0');
              if(ans>60)
                  count++;
      }
        return count;
    }
};