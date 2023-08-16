class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& v) {
        int n=v.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(v[i][0]==v[j][1] && v[i][1]==v[j][0])
                    count++;
            }
        }
        return count;
    }
};