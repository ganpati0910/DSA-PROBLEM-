class Solution {
public: 
    void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>&grid){
        int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;
        queue<pair<int,int>>q;
        int drow[]={1,0,-1,0};
        int dcol[]={0,-1,0,1};
        q.push({row,col});
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                    int nrow=row+drow[i];
                    int mcol=col+dcol[i];
                    if(nrow>=0&&nrow<n&&mcol>=0&&mcol<m&&grid[nrow][mcol]
                     =='1'&&vis[nrow][mcol]!=1){
                        q.push({nrow,mcol});
                        vis[nrow][mcol]=1;
                    }
                

            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(vis[i][j]!=1&&grid[i][j]=='1'){
                    count++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return count;       
    }
};