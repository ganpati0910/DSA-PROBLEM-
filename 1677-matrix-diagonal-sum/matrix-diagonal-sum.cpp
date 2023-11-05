class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int sum=0;
       for(int i=0; i<n; i++){
           for(int j=0; j<m; j++){
               if(i+j==mat.size()-1){
                   sum+=mat[i][j];
               }
               if(i==j){
                   sum+=mat[i][j];
               }

           }
       } 
       if(mat.size()%2!=0){
           sum=sum-mat[mat.size()/2][mat.size()/2];
       }
       return sum;

        
    }
};