class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>&image,vector<vector<int>>&ans,int&color,int&inicolor){
        ans[row][col]=color;
        int n=image.size();
        int m=image[0].size();
        int delrow[]={1,0,-1,0};
        int delcol[]={0,-1,0,1};
        for(int i=0; i<4; i++){
            int nrow=row+delrow[i];
            int mcol=col+delcol[i];
            if(nrow>=0&&nrow<n&&mcol>=0&&mcol<m&&image[nrow][mcol]==inicolor&&ans[nrow][mcol]!=color){
                dfs(nrow,mcol,image,ans,color,inicolor);
            }
        }
       

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>ans=(image);
        int inicolor=image[sr][sc];
       int delrow[]={1,0,-1,0};
       int delcol[]={0,-1,0,1};
       dfs(sr,sc,image,ans,color,inicolor);
       return ans;

        
    }
}; 