class Solution {
public:
    void bfs(int node,vector<int>&vis,vector<int>adjls[]){
        queue<int>q;
        q.push(node);
        vis[node]=1;
        while(!q.empty()){
            int nnode=q.front();
            q.pop();
            for(auto i:adjls[nnode]){
                 if(vis[i]!=1){
                     q.push(i);
                     vis[i]=1;
                 }
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
                bfs(i,vis,adjls);
            }
              
        }
        return ans;
        
    }
};