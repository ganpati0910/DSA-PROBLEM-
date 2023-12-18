class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        int onesrow,zerorow,onecol,zerocol;
        vector<int>rowones(n,0);
        vector<int>colones(m,0);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    rowones[i]++;
                    colones[j]++;
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                onesrow=rowones[i];
                zerorow=n-rowones[i];
                onecol=colones[j];
                zerocol=m-colones[j];
                ans[i][j]=onesrow+onecol-zerorow-zerocol;
            }
        }

      return ans;

        
    }
};