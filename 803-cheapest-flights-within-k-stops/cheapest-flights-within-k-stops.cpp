class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<pair<int,int>>adj[n];
        for(auto i:flights){
            adj[i[0]].push_back({i[1],i[2]});
        }
        queue<pair<int,pair<int,int>>>q;
        vector<int>dist(n,1e9);
        dist[src]=0;
        q.push({0,{src,0}});
        while(!q.empty()){
            int stops=q.front().first;
            int node=q.front().second.first;
            int dis=q.front().second.second;
            q.pop();
            if(stops>K){
                continue;
            } 
            for(auto i:adj[node]){
                int adjnode=i.first;
                int newdis=i.second;
                if(dis+newdis<dist[adjnode]&&stops<=K){
                    dist[adjnode]=dis+newdis;
                    q.push({stops+1,{adjnode,dis+newdis}});
                    
                }
            }
        }
        if(dist[dst]==1e9){
            return -1;
        }
        return dist[dst];
        
    }
};