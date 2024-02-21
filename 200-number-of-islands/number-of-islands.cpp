class Solution {
public:
   
   void bfs(vector<vector<char>>&grid,vector<vector<int>>&vis,int row,int col){
       int n=grid.size();
       int m=grid[0].size();
       queue<pair<int,int>>q;
       int delrow[]={1,0,-1,0};
       int delcol[]={0,-1,0,1};
       q.push({row,col});
       vis[row][col]=1;
       while(!q.empty()){
           int row=q.front().first;
           int col=q.front().second;
           q.pop();
           for(int i=0; i<4; i++){
               int nrow=row+delrow[i];
               int mcol=col+delcol[i];
               if(nrow>=0&&nrow<n&&mcol>=0&&mcol<m&&grid[nrow][mcol]=='1'&&vis[nrow][mcol]!=1){
                   q.push({nrow,mcol});
                   vis[nrow][mcol]=1;
               }
           }

       }


   } 
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]=='1'&&vis[i][j]==0){
                    count++;
                    bfs(grid,vis,i,j);
                }
            }
        }
        return count;
        
    }
};