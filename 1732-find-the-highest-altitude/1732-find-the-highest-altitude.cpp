class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0, i;
        int max1=0;
        int n=gain.size();
        int a[n+1];
        a[0]=0;
        for(i=0;i<gain.size();i++){
           a[i+1]=a[i]+gain[i];
        }
        for(int i=0;i<=gain.size();i++){
            max1=max(max1,a[i]);
        }
        return max1;
    }
};