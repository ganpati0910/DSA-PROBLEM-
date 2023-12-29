class Solution {
public:
    void solve(vector<vector<char>>& mat){
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if((i==0||j==0||i==n-1||j==m-1)&&mat[i][j]=='O'){
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        }
        int delrow[]={1,0,-1,0};
        int delcol[]={0,-1,0,1};
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int nrow=row+delrow[i];
                int mcol=col+delcol[i];
                if(nrow>=0&&nrow<n&&mcol>=0&&mcol<m&&vis[nrow][mcol]==0&&mat[nrow][mcol]=='O'){
                    q.push({nrow,mcol});
                    vis[nrow][mcol]=1;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m;j++){
                if(vis[i][j]==0){
                    mat[i][j]='X';
                }
                else{
                    mat[i][j]='O';
                }
            }
        }
    }
};