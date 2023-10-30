class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
    //    vector<int>v1(10,0);
    //    vector<int>v2(10,0);
    //    for( auto i:nums1){
    //        v1[nums1[i]]++;    
    //    }
    //    for(auto i:nums2){
    //        v2[nums2[i]]++;
    //    }
    //    for(int i=0; i<10; i++){
    //        if(v1[i]==v2[i]){
    //            return i;
    //         //   break;
    //    }
    //    }
    //    sort(v1.begin(),v1.end());
    //    sort(v2.begin(),v2.end());
    //    return min((v1[0]+v2[0]*10),(v1[0]*10+v2[0]));


    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    for(int i=0; i<nums1.size(); i++){
        for(int j=0; j<nums2.size(); j++){
            if(nums1[i]==nums2[j]){
                return nums1[i];
            }
        }
    }
        return min((nums1[0]+nums2[0]*10),(nums1[0]*10+nums2[0]));
        
    }
};