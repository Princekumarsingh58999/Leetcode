class Solution {
public:
    int xorOperation(int n, int start) {
        int num[n];
        int p=0;
        for(int i=0;i<n;i++){
            num[i]=start+2*i;
             
        }
        for(int i=0;i<n;i++){
          p=p^num[i]; 
        }
        return p;
    }
};