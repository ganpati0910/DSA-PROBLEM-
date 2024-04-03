// class Solution {
// public:
//     bool exist(vector<vector<char>>& board, string word){
//         int n=board.size();
//         int m=board[0].size();
//         queue<pair<int,int>>q;
//         for(int i=0; i<n; i++){
//             for(int j=0; j<m; j++){
//                 if(board[i][j]==word[0]){
//                     q.push({i,j});
//                 }
//             }
//         } 
        
//         int delrow[]={1,0,-1,0};
//         int delcol[]={0,-1,0,1};
//         int z=1;
//         while(!q.empty()){
//             int row=q.front().first;
//             int col=q.front().second;
//             q.pop();
//             for(int i=0; i<4; i++){
//                 int nrow=row+delrow[i];
//                 int mcol=col+delcol[i];
//                 if(nrow>=0&&nrow<n&&mcol>=0&&mcol<m&&board[nrow][mcol]==word[z]){
//                     q.push({nrow,mcol});
//                     z++;
//                 }
//             }
//         }
//         if(z==word.size()){
//             return true;
//         }
//         return false;
//     }
// };

class Solution {
public:
    vector<int>x ={-1,0,1,0};
    vector<int>y ={0,1,0,-1};
    vector<vector<int>>vis;
    int r,c;
    bool dfs(int i , int j,int k, vector<vector<char>>& board , string &word){
        if(k == word.size()) return true;
        if(i < 0 || i >= r || j < 0 || j >= c) return false;
        if(board[i][j] != word[k]) return false;
        if(vis[i][j] == 1) return false;
        vis[i][j] = 1;
        bool ans = false;
        for(int d = 0 ; d < 4 ; d++){
            ans = ans || dfs(i+x[d] , j+y[d] , k + 1 , board,word);
        }
        vis[i][j] = -1;
        return ans;

    }
    bool exist(vector<vector<char>>& board, string word) {
        r = board.size();
        c = board[0].size();
        vis.assign(r,vector<int>(c,-1));
        for(int i = 0 ; i < r ; i++){
            for(int j = 0 ; j < c ; j++){
                if(board[i][j] == word[0])
                    if(dfs(i,j,0,board,word)) 
                        return true;
            }
        }
        return false;
    }
};