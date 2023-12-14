class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int onerow,onecol,zerorow,zerocol;
       vector<vector<int>>ans(n,vector<int>(m,0));
       vector<int>rowone(n,0);
       vector<int>colone(m,0);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    rowone[i]++;
                    colone[j]++;
                }
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                onerow=rowone[i];
                onecol=colone[j];
                zerorow=n-rowone[i];
                zerocol=m-colone[j];
                ans[i][j]=onerow+onecol-zerorow-zerocol;
            }
        }

        return ans;
    }
};