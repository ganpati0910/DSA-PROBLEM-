class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        if(nums.size()<=1){
            return -1;
        }
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for(int i=0; i<nums.size();i++){
            pq.push({nums[i]});
        }
        long long count=0;
        while(pq.top()<k){
            long long x=pq.top();
            pq.pop();
            long long y=pq.top();
            pq.pop();
            long long z=min(x,y)*2+max(x,y);
            pq.push({z});
             count++;
        }
        return count;
        
    }
};