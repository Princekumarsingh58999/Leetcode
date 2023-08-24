class Solution {
public:
    int countOperations(int num1, int num2) {
        int count=0, count1=0;
       for(int i=0;i<100000;i++){
            if(num1>num2 && num1!=0 && num2!=0){
                num1=num1-num2;
            count++;
            }
            else if(num2>=num1 && num1!=0 && num2!=0){
                num2=num2-num1;
                count1++;
               
            }
            
        }
        return count+count1;
    }
};