class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp1;
        map<int,int>mp2;
        for(auto it:nums1){
            mp1[it]++;
        }
        for(auto it:nums2){
            mp2[it]++;
        }
        vector<int>res(2,0);
        for(auto it:nums1){
            if(mp2[it]>0){
                res[0]++;
            }
        }
        for(auto it:nums2){
            if(mp1[it]>0){
                res[1]++;
            }
        }
        return res;
    }
};