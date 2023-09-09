class Solution {
public:
    int tribonacci(int n) {
         int a[n+1];
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        else if(n==2)
            return 1;
  
           a[0]=0;
      a[1]=1;
        a[2]=1;
        for(int i=3;i<n+1;i++){
            a[i]=a[i-1]+a[i-2]+a[i-3];
        }
        return a[n];
    }
};