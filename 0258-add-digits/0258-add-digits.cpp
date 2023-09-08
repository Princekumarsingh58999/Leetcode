class Solution {
public:
    int addDigits(int num) {
        int p=0, sum=0;
       if(num<10)
           return num;
        else{
        while(num){
            p=num%10;
            sum+=p;
            num=num/10;
            if(sum>9 && num==0){
                num=sum;
                sum=0;}
        }}
        return sum;
    }
};