class Solution {
public:
    int totalMoney(int n) {
        
        int sum=0;
        int p=1;
        int count=p;
        for(int i=1;i<=n;i++){
            sum+=count;
            count++;
            if(i%7==0){
                p++;
            count=p;}
        }
        return sum;
           
    }
};