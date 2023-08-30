class Solution {
public:
    bool isPalindrome(int x) {
    long long  p=0;
        long long temp=x;
        if(x<0)
        return false;
        while(temp!=0){
            int d=temp%10;
       p=(p*10)+d;
       temp=temp/10;}
      

       return (p==x);
      
    
    }
};