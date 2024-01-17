class Solution {
public:
    int largestRectangleArea(vector<int>& height){
        int n=height.size();
        vector<int>left(n);
        vector<int>right(n);
        // nearest smaller to left
        stack<pair<int,int>>st1;
        int pseudo=-1;
        for(int i=0; i<n; i++){
            while(!st1.empty()&&st1.top().first>=height[i]){
                st1.pop();
            }
            if(st1.size()==0){
                left[i]=pseudo;
            }
            else if(!st1.empty()&&st1.top().first<height[i]){
                left[i]=st1.top().second;
            }
            st1.push({height[i],i});
        }
        //nearest smaller to right
        stack<pair<int,int>>st2;
        int pseudo1=n;
        for(int i=n-1; i>=0; i--){
            while(!st2.empty()&&st2.top().first>=height[i]){
                st2.pop();
            }
            if(st2.size()==0){
                right[i]=pseudo1;
            }
            else if(!st2.empty()&&st2.top().first<height[i]){
                right[i]=st2.top().second;
            }
            st2.push({height[i],i});
        }
        // reverse(right.begin(),right.end());
        int maxarea=0;
        for(int i=0; i<n; i++){
           maxarea=max(maxarea,(right[i]-left[i]-1)*height[i]); 
        }
        return maxarea;
    }
};