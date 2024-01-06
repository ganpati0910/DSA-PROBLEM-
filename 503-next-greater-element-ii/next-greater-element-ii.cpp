class Solution {
public:
    vector<int> nextGreaterElements(vector<int>&arr){
        int n=arr.size();
        stack<int>st;
        vector<int>ans;
        for(int i=n-1; i>=0; i--){
            st.push(arr[i]);
        }
        for(int i=n-1; i>=0; i--){
            while(!st.empty()&&st.top()<=arr[i]){
                st.pop();
            }
            if(st.size()==0){
                ans.push_back(-1);
            }
            else if(!st.empty()&&st.top()>arr[i]){
                ans.push_back(st.top());
            }
            st.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;    
    }
};