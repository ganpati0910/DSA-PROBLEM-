class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        int ans=arr[0];
        for(int i=1; i<n; i++){
            ans=ans^arr[i];
        }
        return ans;
        
    }
};