class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>adj[n];
        vector<int>indegree(n,0);
        for( int i=0; i<n; i++){
            for(auto it:graph[i]){
                // bsss yaha pe reverseing the edsges nhi smjh aaya 
                adj[it].push_back(i);
                indegree[i]++;
            }
        }
        vector<int>safe;
        queue<int>q;
        for(int i=0; i<n; i++){
           if(indegree[i]==0){
               q.push(i);
           }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            safe.push_back(node);
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        sort(safe.begin(),safe.end());
        return safe;
        
    }
};