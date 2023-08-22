class Solution {
public:
    int subtractProductAndSum(int n) {
        int k=1, l=0;
        
     while(n){
         int s=n%10;
      
         k*=s;
         l+=s;
       n=n/10;}
        return k-l;
    }
};