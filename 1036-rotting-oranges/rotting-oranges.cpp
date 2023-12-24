class Solution {
public: 
    
    
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
            }
        }
        int delrow[]={1,0,-1,0};
        int delcol[]={0,-1,0,1};
        int tm=0;
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int t=q.front().second;
            q.pop();
            tm=max(tm,t);
            for(int i=0; i<4; i++){
                int nrow=row+delrow[i];
                int mcol=col+delcol[i];
                if(nrow>=0&&nrow<n&&mcol>=0&&mcol<m&&vis[nrow][mcol]!=2&&                   grid[nrow][mcol]==1){
                    vis[nrow][mcol]=2;
                    q.push({{nrow,mcol},t+1});
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(vis[i][j]!=2&&grid[i][j]==1){
                    return -1;
                }
            }
        }

        return tm;
    }
};