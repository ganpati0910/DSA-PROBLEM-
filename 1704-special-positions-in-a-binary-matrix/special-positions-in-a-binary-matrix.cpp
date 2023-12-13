class Solution {
public: 
   
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>countrow(n,0);
        vector<int>countcolumn(m,0);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){ 
               if(mat[i][j]==1){
                 countrow[i]++;
                 countcolumn[j]++;
               }
            }
        }
        int ans=0;
        for(int i=0; i<countrow.size(); i++){
            for(int j=0; j<countcolumn.size(); j++){
                if((mat[i][j]==1&& countrow[i]==1&&countcolumn[j]==1)){
                    ans++;
                }
            }
        }
        return ans;
    }
};