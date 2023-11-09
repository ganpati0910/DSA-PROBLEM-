class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int i=0;

        for(i=n-1; i>=0; i--){
            if(num[i]%2!=0) break;
            else if(i==0 and num[i]%2==0)  return "";
        }
        return num.substr(0,i+1);
    }
};