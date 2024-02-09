class Solution {
public:
    int area(vector<vector<int>>&grid,int r,int c,vector<vector<int>>&vis){
        int n=grid.size();
        int m=grid[0].size();
        int delrow[]={1,0,-1,0};
        int delcol[]={0,-1,0,1};
        queue<pair<pair<int,int>,int>>q;
        q.push({{r,c},1});
        vis[r][c]=1;
             int cnt=1;
            while(!q.empty()){
                int row=q.front().first.first;
                int col=q.front().first.second;
                q.pop();
                for(int i=0; i<4; i++){
                    int nrow=row+delrow[i];
                    int mcol=col+delcol[i];
                    if(nrow>=0&&nrow<n&&mcol>=0&&mcol<m&&grid[nrow][mcol]==1&&vis[nrow][mcol]!=1){
                        cnt+=1;
                        q.push({{nrow,mcol},cnt});
                        vis[nrow][mcol]=1;
                       
                    }
                }
            }
        return cnt;   
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if( vis[i][j]==0&&grid[i][j]==1){
                  int count=area(grid,i,j,vis);
                     if(count>maxi){
                         maxi=count;
                     }
                }
            }
        }
        return maxi;
        
    }
};