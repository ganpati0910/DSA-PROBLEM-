class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if((i==0||i==n-1||j==0||j==m-1)&&grid[i][j]==1){
                    q.push({i,j});
                    vis[i][j]=1;
                    
                }
            }
        }
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int nrow=row+delrow[i];
                int mcol=col+delcol[i];
                if(nrow>=0&&nrow<n&&mcol>=0&&mcol<m&&vis[nrow][mcol]==0&&grid[nrow][mcol]==1){
                    q.push({nrow,mcol});
                    vis[nrow][mcol]=1;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(vis[i][j]==0&&grid[i][j]==1){
                    count++;
                }
            }
        }
        return count;
        
    }
};