class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v(10,0);
        for(int i=0; i<nums1.size(); i++){
            v[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); i++){
            v[nums2[i]]++;
        }
        for(int i=1; i<=9; i++){
            if(v[i]>1){
                return i;
            }
        }
     sort(nums1.begin(),nums1.end());
     sort(nums2.begin(),nums2.end());
     return min((nums1[0]+nums2[0]*10),(nums1[0]*10+nums2[0]));
        
        
    }
};