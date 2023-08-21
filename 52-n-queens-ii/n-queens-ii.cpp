class Solution {
public:
     void addsolution (vector<vector<int>>&board,vector<vector<int>>&ans,int n){
         vector<int>temp;
         for(int i=0; i<n; i++){
             for(int j=0; j<n; j++){
                 if(board[i][j]){
                   temp.push_back(j+1);
                 }
             }
         }
         ans.push_back(temp);
         return;
     } 
      bool issafe(int row,int col,vector<vector<int>>&board,vector<vector<int>>&ans,int n){
          // check for same row;
          int x=row;
          int y=col;
          while(y>=0){
              if(board[x][y]==1){
                  return false;
              }
              y--;
          }
          // no checking for same column
          // now check for diagonal
          x=row;
          y=col;
          while(x<n&&y>=0){
              if(board[x][y]==1){
                  return false;
              }
              y--;
              x++;
          }

          x=row;
          y=col;
          while(x>=0&&y>=0){
              if(board[x][y]==1){
                  return false;
              }
              y--;
              x--;
          }
          return true;
      }
    void solve(int col,vector<vector<int>>&board,vector<vector<int>>&ans,int n){
        // base case 
        if(col==n){
        addsolution(board,ans,n);
        return;
        }
        for(int row=0; row<n; row++){
      if(issafe(row,col,board,ans,n)){
          board[row][col]=1;
          solve(col+1,board,ans,n);
          // backtracking
          board[row][col]=0;
      }
        }
    }
    int totalNQueens(int n) {
        vector<vector<int>>board(n,vector<int>(n,0));
        vector<vector<int>>ans;

        solve(0,board,ans,n);
        return ans.size();
    }
};