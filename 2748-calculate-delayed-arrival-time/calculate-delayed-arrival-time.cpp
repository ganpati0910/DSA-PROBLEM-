class Solution {
public:
    int findDelayedArrivalTime(int at, int dt) {
    //     if(at+dt==24){
    //         return 0;
    //     }
    //    else if(at+dt>24){
    //         return at+dt-24;
    //     }
    //     else{
    //         return at+dt;
    //     }
    int t=at+dt;
    return t%24;

    }
};