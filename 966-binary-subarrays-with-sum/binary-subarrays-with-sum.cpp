class Solution {
public:
    int numSubarraysWithSum(vector<int>& arr, int k) {
         unordered_map<int,int>mp;
         mp[0]=1;
        int sum=0,count=0;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            if(mp.find(sum-k)!=mp.end()){
                count+=mp[sum-k];
            }
            mp[sum]++;
        }
        return count;
    }
};