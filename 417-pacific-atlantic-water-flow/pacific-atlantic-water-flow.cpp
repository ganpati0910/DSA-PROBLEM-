class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        queue<pair<int,int>>qp;
        queue<pair<int,int>>qa;
        vector<vector<int>>visa(n,vector<int>(m,0));
        vector<vector<int>>visp(n,vector<int>(m,0));
        for(int i=0;i<n; i++){
            qp.push({i,0});
            visp[i][0]=1;
        }
        for(int j=0; j<m; j++){
            qp.push({0,j});
            visp[0][j]=1;
        }
        for(int i=0; i<n; i++){
            qa.push({i,m-1});
            visa[i][m-1]=1;
        }
        for(int j=0; j<m; j++){
           qa.push({n-1,j});
           visa[n-1][j]=1;
        }
       
        int drow[]={1,0,-1,0};
        int dcol[]={0,-1,0,1};
       
          
        while(!qp.empty()){
            int r=qp.front().first;
            int c=qp.front().second;
            qp.pop();
            for(int i=0; i<4; i++){
                int nrow= r+drow[i];
                int mcol= c+dcol[i];
                if(nrow<n&&nrow>=0&&mcol<m&&mcol>=0&&visp[nrow][mcol]==0){
                    if(heights[nrow][mcol]>=heights[r][c]){
                        qp.push({nrow,mcol});
                        visp[nrow][mcol]=1;
                    }
                }
            }
        }
        while(!qa.empty()){
            int r1=qa.front().first;
            int c1=qa.front().second;
            qa.pop();
            for(int i=0; i<4; i++){
                int n1row= r1+drow[i];
                int m1col= c1+dcol[i];
                if(n1row<n&&n1row>=0&&m1col<m&&m1col>=0&&visa[n1row][m1col]==0){
                    if(heights[n1row][m1col]>=heights[r1][c1]){
                        qa.push({n1row,m1col});
                        visa[n1row][m1col]=1;
                    }
                }
            }
        }
        vector<vector<int>>ans;
        for(int i=0; i<n; i++){
            for(int j=0;j<m; j++){
                if(visp[i][j]==1 &&visa[i][j]==1){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};