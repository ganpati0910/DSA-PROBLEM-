class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0; i<nums1.size(); i++){
            mp1[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); i++){
            mp2[nums2[i]]++;
        }
        for(auto it:nums1){
            if(mp1[it]>0&&mp2[it]>0){
                ans.push_back(it);
                mp1[it]-=1;
                mp2[it]-=1;
            }
        }
        return ans;   
    }
};