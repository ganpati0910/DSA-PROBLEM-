class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
           if(it.second<=1){
               return -1;
           } 
           if(it.second%3==0){
              sum=sum+it.second/3;
           }
           else{
               sum=sum+it.second/3+1;
           }
        }
        return sum;
    }
};