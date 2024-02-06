class Solution {
public:

    string s="AGCT";
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string>st;
       for(int i=0; i<bank.size(); i++){
           st.insert(bank[i]);
       }
        queue<pair<string,int>>q;
        q.push({start,0});
        while(!q.empty()){
            string node=q.front().first;
            int move=q.front().second;
            q.pop();
            if(node==end){
                return move;
            }
            for(int i=0; i<node.size(); i++){
                string t=node;
                for(int j=0; j<4; j++){
                     string t2=t;
                     t2[i]=s[j];
                     if(st.find(t2)!=st.end()){
                         q.push({t2,move+1});
                         st.erase(t2);
                     }
                }
            }


        }
            return -1;

    }
};