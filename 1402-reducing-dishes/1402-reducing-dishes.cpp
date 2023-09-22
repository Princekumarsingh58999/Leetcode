class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size();
        sort(satisfaction.begin(), satisfaction.end(),greater<int>());
        int m=0, result=0;
        for(int i=0;i<satisfaction.size();i++){
            m+=satisfaction[i];
            if(m<0)
                break;
            result+=m;}
return result;
    }
};