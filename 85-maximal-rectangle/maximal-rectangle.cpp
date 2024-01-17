class Solution {
public: 
     int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
         vector<int>right(n,0);
        vector<int>left(n,0);
        //nearest smaller to left 
        stack<pair<int,int>>st1;
        int pseudo=-1;
        for(int i=0; i<n; i++){
            while(!st1.empty()&&st1.top().first>=arr[i]){
                st1.pop();
            }
            if(st1.empty()){
                left[i]=pseudo;
            }
            else{
                left[i]=st1.top().second;
            }
            st1.push({arr[i],i});
        }
        // nearest smaller to right
        stack<pair<int,int>>st2;
        int pseudoindx=n;
        for(int i=n-1; i>=0; i--){
            while(!st2.empty()&&st2.top().first>=arr[i]){
                st2.pop();
            }
            if(st2.empty()){
                right.push_back(pseudoindx);
            }
            else{
                right.push_back(st2.top().second);
            }
            st2.push({arr[i],i});
        }
        reverse(right.begin(),right.end());
        int maxarea = 0;
        for(int i = 0; i < n; i++){
            cout<<right[i]<<" "<<left[i]<<" ";
            maxarea = max(maxarea, (right[i]-left[i]-1)*arr[i]);
        }
        
        return maxarea;
     }

    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int>histogram(matrix[0].size(),0);
        int maxi= INT_MIN;
        
        for(int i = 0;i<matrix.size();i++)
        {
            for(int j= 0 ;j<histogram.size();j++)
            {
                if (matrix[i][j]=='1')
                {
                    histogram[j]++;
                }
                else
                {
                    histogram[j]=0;
                }
            }
           maxi=max(maxi,largestRectangleArea(histogram));
             }    
              return maxi;

        
    }
};