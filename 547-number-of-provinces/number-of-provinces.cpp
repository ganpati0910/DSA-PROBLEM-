class Solution {
public:
    void dfs(int node,vector<int>adjls[],vector<int>&vis){
        vis[node]=1;
        for(auto i:adjls[node]){
            if(vis[i]!=1){
                dfs(i,adjls,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>&adj){
        int V=adj.size();
        vector<int>adjls[V];
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                if(adj[i][j]==1&&i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        vector<int>vis(V,0);
        int ans=0;
        for(int i=0; i<V; i++){
            if(vis[i]!=1){
                ans++;
                dfs(i,adjls,vis);
            }
        }
        
       return ans;
        
    }
};