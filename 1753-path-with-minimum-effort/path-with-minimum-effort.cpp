class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
      int m=heights[0].size();
      vector<vector<int>>dist(n,vector<int>(m,1e9));
       priority_queue< pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>> 
       ,greater<pair<int,pair<int,int>>>> pq;
       dist[0][0]=0;
       pq.push({0,{0,0}});
       int drow[]={1,0,-1,0};
       int dcol[]={0,-1,0,1};
       while(!pq.empty()){
           int diff=pq.top().first;
           int row=pq.top().second.first;
           int col=pq.top().second.second;
           
           pq.pop();
           if(row==n-1&&col==m-1){
               return diff;
           }
           
           for(int i=0; i<4;i++){
               int nrow=row+drow[i];
               int mcol=col+dcol[i];
               
               if(nrow<n&&nrow>=0&&mcol<m&&mcol>=0){
                   int neweffort=max(abs(heights[row][col]-heights[nrow][mcol]),diff);
                   if(neweffort<dist[nrow][mcol]){
                       dist[nrow][mcol]=neweffort;
                       pq.push({neweffort,{nrow,mcol}});
                   }
                   
               }
           }
           
       }
       return 0;
    }
};