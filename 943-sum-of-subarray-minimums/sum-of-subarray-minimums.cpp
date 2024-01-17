class Solution {
public:
    
    int sumSubarrayMins(vector<int>& arr){
        int mod=(int)(1e9+7);
        int n=arr.size();
        vector<long long>left(n);
        vector<long long>right(n);
        stack<pair<int,int>>st1;
        for(int i=0; i<n; i++){
            int count=1;
            while(!st1.empty()&&st1.top().first>arr[i]){
                count+=st1.top().second;
                st1.pop();
            }
            st1.push({arr[i],count});
            left[i]=count;
        }
        stack<pair<int,int>>st2;
        for(int i=n-1; i>=0; i--){
            int count2=1;
          while(!st2.empty()&&st2.top().first>=arr[i]){
              count2+=st2.top().second;
              st2.pop();
          }
          st2.push({arr[i],count2});
          right[i]=count2;
        }
        long long ans=0;
        for(int i=0; i<n; i++){
            ans=(ans+left[i]*right[i]*arr[i])%mod;
        }
        return ans;
    }
};