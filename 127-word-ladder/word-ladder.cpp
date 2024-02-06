class Solution {
public:
    string s="abcdefghijklmnopqrstuvwxyz";
    int ladderLength(string begin, string end, vector<string>& wordlist){
        int n=wordlist.size();
        unordered_set<string>st;
        for(int i=0; i<n; i++){
            st.insert(wordlist[i]);
        }
        queue<pair<string,int>>q;
        q.push({begin,1});
        while(!q.empty()){
            string node=q.front().first;
            int count=q.front().second;
            q.pop();
            if(node==end){
                return count;
            }
            for(int i=0; i<node.size(); i++){
                string temp=node;
                for(int j=0; j<26; j++){
                    string temp2=node;
                    temp2[i]=s[j];
                    if(st.find(temp2)!=st.end()){
                        q.push({temp2,count+1});
                        st.erase(temp2);
                    }
                }
            }
        }
        return 0;
    }
};