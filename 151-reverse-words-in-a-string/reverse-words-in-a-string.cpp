class Solution {
public:
    string reverseWords(string s) {
        string str="";
        stack<string>st;
        for(int i=0; i<=s.size(); i++){
            if(s[i]==' '|| s[i]=='\0'){
                if(str.length()>0){
                    st.push(str);
                    str="";
                }
            }
            else{
             str+=s[i];
            }  
        }
        string ans="";
        while(st.size()>1){
            ans+=st.top();
            ans+=' ';
            st.pop();
        }
        ans+=st.top();
        return ans;
        
    }
};