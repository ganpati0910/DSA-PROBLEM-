class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs){
       int n=costs.size();
        vector<int>diff;
        int cost=0;
        //chlo sbse pehle city a me bhej dete hai sbko 
        for(int i=0; i<n; i++){
           cost+=costs[i][0];
            diff.push_back(costs[i][1]-costs[i][0]); 
        }
        // ab difference dekte haii ki b bhejne me jaise maan lo negative aaya to iska mtlb isko b bhejna chaiye aur positive mtlb ki a hi jaan achaiye 
        // for(int i=0; i<n; i++){
        //     diff.push_back(costs[i][1]-costs[i][0]);
        // }
        sort(diff.begin(),diff.end());
        
        // aur ab bhaii 2n people the  to ab n people walo ke liye least difference dekhoo mtlb unko city b bhejna chaiye  
        for(int i=0; i<costs.size()/2; i++){
            cost+=diff[i];    
        }
        return cost;


    }
};