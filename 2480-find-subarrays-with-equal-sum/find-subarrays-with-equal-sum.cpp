class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
    //     int k=2;
    //     int i=0;
    //     int j=0;
    //     int sum=0;
    //     int count=0;
        int n=nums.size();
    //     while(j<n){
    //        sum+=nums[j];
    //        if(j-i+1==k){
    //            count++;
    //            sum-=nums[i];
    //            i++;
    //        }
    //            j++;
    //     }
    //    if(count==2){
    //        return true;
    //     }
    //     return false;  

          set<int>s;
          for(int i=1; i<n; i++){
              if(s.find(nums[i]+nums[i-1])!=s.end()){
                     return true;
              }
              s.insert(nums[i]+nums[i-1]);
          }
        return false;
          
    }
};