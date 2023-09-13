class Solution {
public:
    bool isPowerOfThree(int n) {
//                 long long int p=n;
//         if(n<=0)
//             return false;
//         else if(n==1)
//             return true;
//        else{
//         while(p!=0){
//             if(p%3!=0){
//                 return false;
//                 break;}
//             else if(p%3==0){
//                 p=p/3; 
//              if(p==1)
//         return true;}
//         }
                   
//        }

//         return false;
       
        
   //largest number for divesible to 3 in bitwine 2^31. which is given in question.     
        return (n>0 && 1162261467%n==0);
    }
};