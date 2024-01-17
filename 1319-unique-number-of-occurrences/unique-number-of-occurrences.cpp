class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr){
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        unordered_map<int,int>mp2;
        for(auto it:mp){
            mp2[it.second]++;
        }
        for(auto it:mp2){
            if(it.second!=1){
                return false;
            }
        }
        return true;
        
    }
};