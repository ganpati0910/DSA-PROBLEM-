class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int>st;
        int sum=0;
       for(auto &i:ast){
           while(!st.empty()&&st.top()>0&&i<0){
               sum=i+st.top();
               if(sum<0){
                   st.pop();
               }
               else if(sum>0){
                   i=0;
               }
               else{
                   st.pop();
                   i=0;
               }
           }
           if(i!=0){
               st.push(i);
           }
       }
       int n=st.size();
       vector<int>ans(n);
       int i=n-1;
       while(!st.empty()){
           ans[i]=st.top();
           st.pop();
           i--;
       }
     
       return ans;  
    }
};