class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        stack<char>st;
        for(int i=0; i<n; i++){
            while(!st.empty()&&st.top()>num[i]&&k!=0){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(st.size()>0&&k!=0){
            st.pop();
            k--;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        
        while(ans.size()>0&&ans.back()=='0'){
            ans.pop_back();
        }
        if(ans.size()==0){
            return "0";
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};