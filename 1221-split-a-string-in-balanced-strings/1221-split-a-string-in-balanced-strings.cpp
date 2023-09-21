class Solution {
public:
    int balancedStringSplit(string s) {
        int count1=0, count2=0, sum=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R')
                count1++;
            if(s[i]=='L')
                count2++;
            if(count1==count2){
                sum++;
                count1=0;
                count2=0;}
        }
        return sum;
    }
};