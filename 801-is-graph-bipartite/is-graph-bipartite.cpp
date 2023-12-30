class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int>color(V,-1);
        queue<int>q;
        for(int i=0; i<V; i++){
            if(color[i]==-1){
                q.push(i);
                color[i]=0;
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    for(auto i:graph[node]){
                        if(color[i]==-1){
                            color[i]=!color[node];
                            q.push(i);
                        }
                        else if(color[i]==color[node]){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};