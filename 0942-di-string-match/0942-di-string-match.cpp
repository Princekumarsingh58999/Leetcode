class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int>v;
        int count=0, count1=0;
        int n=s.size();
        for(int i=0;i<=s.size();i++){
            if(s[i]=='D'){
            v.push_back(n-count);
                count++;}
            else {
                v.push_back(count1);
                count1++;}
        }
        return v;
    }
};