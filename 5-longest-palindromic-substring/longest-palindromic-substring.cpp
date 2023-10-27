class Solution {
public: 
  bool check(string&s,int i,int j){
      while(i<=j){
          if(s[i]!=s[j]){
              return false;
          }
          else{
              i++;
              j--;
          }
      }
      return true;
  }
    string longestPalindrome(string s) {
        int maxLen = 0;
        string ans = "";
        for(int i=0;i<s.length();i++){
            string temp = "";
            for(int j=i;j<s.length();j++){
                temp += s[j];
                if(temp[0]==temp.back() && temp.size()>maxLen){
                    if(check(temp,0,temp.size()-1)==true){
                        maxLen = temp.size();
                        ans = temp;
                    }
                }
            }
        }
        return ans; 
    }
};