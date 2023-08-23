class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int p=arrivalTime+delayedTime;
        if(p<24)
            return p;
        else if(p==24)
            return 0;
        else return p-24;
    }
};