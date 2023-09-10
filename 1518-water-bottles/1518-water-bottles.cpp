class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum=numBottles,p=0;
        while(numBottles>=numExchange){
             p=numBottles%numExchange;       
            numBottles=numBottles/numExchange;           
           sum+=numBottles;
            numBottles=numBottles+p;
        }
        return sum;
    }
};