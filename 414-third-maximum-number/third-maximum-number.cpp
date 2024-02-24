class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        set<int>st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        if(st.size()==2){
            return *max_element(nums.begin(),nums.end());
        }
        
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it :st){
            pq.push(it);
            if(pq.size()>3){
                pq.pop();
            }
            st.erase(it);
        }
        return pq.top();  
    }
};