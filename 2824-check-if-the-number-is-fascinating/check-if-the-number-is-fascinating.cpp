class Solution {
public:
    bool isFascinating(int n) {
      int n1=2*n;
      int n2=3*n;
       string s= to_string(n);
       string s1= to_string(n1);
       string s2= to_string(n2);
       string ans=s+s1+s2;
        int m=ans.size();
        sort(ans.begin(),ans.end());
         if(ans == "123456789") return true;
        return false;
    }
};