class Solution {
    unordered_set<string> d;
    vector<int> dp;
    bool solve(string &s, int i){
        if(i == s.length())
            return 1;
        
        if(dp[i] != -1)
            return dp[i];

        string cur = "";
        for(int j = i; j<s.length(); j++){
            cur += s[j];
            if(d.count(cur)){
                if(solve(s, j+1))
                    return dp[i] = 1;
            }
        }
        return dp[i] = 0;
    }
public:
    bool wordBreak(string s, vector<string>& dict) {
        for(string &s: dict)
            d.insert(s);

        dp.resize(s.length()+1, -1);
        return solve(s, 0);
    }
};