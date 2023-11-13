class Solution {
public: 
    bool check( char c){
        string vow="aeiouAEIOU";
        for(auto i:vow){
            if(c==i){
                return 1;
            }
        }
        return 0;        
    }
    string sortVowels(string s) {
        string vowels="";
        for(int i=0; i<s.size(); i++){
            if(check(s[i])){
                vowels.push_back(s[i]);
            }
        }

        sort(vowels.begin(),vowels.end());
        int j=0;
        for(int i=0; i<s.size(); i++){
            if(check(s[i])){
                s[i]=vowels[j];
                j++;
                
            }
        }
    return s;

    }
};