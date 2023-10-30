class Solution {
public:
    int distinctAverages(vector<int>& nums) {
      int n=nums.size();
        int i=0;
        int j=n-1;
        sort(nums.begin(),nums.end());
        set<float>st;
       while(i<j){
           st.insert((nums[i]+nums[j]+0.00)/2.0); 
           i++;
           j--;   
       }
        return st.size();
    }
};