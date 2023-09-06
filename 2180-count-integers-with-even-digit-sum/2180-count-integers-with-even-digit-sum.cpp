class Solution {
public:
    int countEven(int num) {
//         int count=0;
      
//         for(int i=2;i<=num;i++){
//             if((i/10)%2==0 && (i%100)%2==0){
//             count++;}
//             else if((i/10)%2!=0 && (i%100)%2!=0){
//                 count++;
//             }
           
//         }
//         return count;
       int sum=0;
        int p=num;
        while(num>0){
            sum+=num%10;
            num/=10;
        }
        if(sum%2==0)
            return p/2;
        else return (p-1)/2;
    }
};