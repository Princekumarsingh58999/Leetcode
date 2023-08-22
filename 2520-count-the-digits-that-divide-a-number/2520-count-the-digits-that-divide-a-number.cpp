class Solution {
public:
    int countDigits(int num) {
      int p=num;
        int count=0;
        while(num){
            int k=num%10;
        if(p%k==0)
            count++;
            num=num/10;
        }
        return count;
    }
};