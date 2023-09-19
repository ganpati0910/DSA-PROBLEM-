class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>newboard=board;
        int dr[8]={-1,-1,0,1,1,1,0,-1};
        int dc[8]={0,1,1,1,0,-1,-1,-1};
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
               int count=0;
               for(int k=0; k<8; k++){
                   int nrow=i+dr[k];
                   int ncol=j+dc[k];
                   if(nrow>=0&&nrow<n&&ncol<m&&ncol>=0){
                       if(board[nrow][ncol]==1){
                           count++;
                       }
                   }
               }
                   if(board[i][j]==1){
                       if(count<2||count>3)
                         newboard[i][j]=0;

                   }
                   else{
                       if(count==3)newboard[i][j]=1;
                   }
            }
        }
        board=newboard;
    }
};