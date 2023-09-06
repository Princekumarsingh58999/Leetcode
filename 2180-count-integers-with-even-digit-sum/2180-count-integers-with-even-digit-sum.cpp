class Solution {
public:
    bool check(int num)
        {
        int sum=0;
             while(num>0){
                sum+=num%10;
                num/=10;
                     
            }
        return sum%2;   
    }
        
    
    int countEven(int num) {
        int count=0;
      
        for(int i=2;i<=num;i++){
            // if((i/10)%2==0 && (i%100)%2==0){
            // count++;}
            // else if((i/10)%2!=0 && (i%100)%2!=0){
            //     count++;
            
            if(!check(i))
                count++;
            }
           
        return count;
    }
};