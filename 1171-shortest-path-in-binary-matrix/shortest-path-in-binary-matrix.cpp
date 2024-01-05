class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
        queue<pair<int,pair<int,int>>>q;
        if(grid[0][0]!=0){
            return -1;
        }
        if(n-1==0){
            return 1;
        }
        q.push({1,{0,0}});
        dist[0][0]=1;
        int delrow[]={-1,-1,0,+1,+1,+1,0,-1};
        int delcol[]={0,+1,+1,+1,0,-1,-1,-1};
        while(!q.empty()){
            int dis=q.front().first;
            int row=q.front().second.first;
            int col=q.front().second.second;
            q.pop();
            for(int i=0; i<8; i++){
                int nrow=row+delrow[i];
                int mcol=col+delcol[i];
                if(nrow>=0&&nrow<n&&mcol>=0&&mcol<m&&grid[nrow][mcol]==0&&dis+1<dist[nrow][mcol]){
                    dist[nrow][mcol]=dis+1;
                
                if(nrow==n-1&&mcol==m-1){
                    return dis+1;
                }
                q.push({dis+1,{nrow,mcol}});
                }
            }
        }
        return -1;
        
    }
};