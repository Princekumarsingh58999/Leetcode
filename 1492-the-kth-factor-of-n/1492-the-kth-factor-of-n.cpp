class Solution {
public:
    int kthFactor(int n, int k) {
//         int count=0;
//         int p=0;
//         for(int i=1;i<=n;i++){
//             if(n%i==0){
//                 count++;
//                 if(count==k){
//                     p=i;
//                     break;
//                 }
//             }
            
//         }
//         if(p==0)
//             return -1;
//         else 
//             return p;
        for(int i=1;i<=n/2;i++){
            if(n%i==0)
                k--;
            if(k==0)
                return i;
        }
        if(k==1)
            return n;
        return -1;
    }
};