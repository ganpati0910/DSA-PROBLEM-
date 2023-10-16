class Solution {
public:
    vector<int> getRow(int r) {
        vector<vector<int>>outrow(r+1,vector<int>(r+1,0));
        outrow[0][0]=1;

        for(int i=1; i<=r; i++){
            for(int j=0; j<=i; j++)
            {

               outrow[i][j]+=outrow[i-1][j];
               if(j!=0)
               {
                   outrow[i][j]+=outrow[i-1][j-1];
               }
              
            }
            
        }
        return  outrow[r];
    }
           
};