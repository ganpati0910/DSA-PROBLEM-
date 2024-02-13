class Solution {
public:
    bool pali(string s){
        int n=s.size();
        int start=0;
        int end=n-1;
        while(start<=end){
            if(s[start]!=s[end]){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;

    }
    string firstPalindrome(vector<string>& words){
        int n=words.size();
        for(int i=0; i<n; i++){
            if(pali(words[i])){
                return words[i];
            }
        }
        return "";
        
    }
};