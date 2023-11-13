class Solution {
public: 
    bool check(char c){
        string vow="aeiouAEIOU";
        for(auto i: vow){
            if(c==i){
                return 1;
            }
        }
        return 0;
    }
    string reverseVowels(string s) {
        string vowel="";
        for(int i=0; i<s.size(); i++){
            if(check(s[i])){
                vowel.push_back(s[i]);
            }
        }

        reverse(vowel.begin(),vowel.end());
        int j=0;
        for(int i=0; i<s.size(); i++){
           
            if(check(s[i])){
                s[i]=vowel[j];
                j++;

            }
        }

       return s; 
    }
};