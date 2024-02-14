class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
    //  int count=0;
    //  int j=0;
    //  int k=pattern.size()+1;
    //  for(int i=0; i<nums.size(); i++){
    //      if(i-j+1==k){
    //           bool flag=false;
    //          for(int l=0; l<pattern.size(); l++){
    //              if(pattern[l]==1){
    //                  if(nums[i+l+1]>nums[i+l]){
    //                     flag=true;
    //                  }
    //                  else{
    //                      flag=false;
    //                      break;
    //                  }
    //              }
    //              else if(pattern[l]==0){
    //                  if(nums[i+l+1]==nums[i+l]){
    //                      flag=true;
    //                  }
    //                  else{
    //                     flag=false;
    //                      break;
    //                  }
    //              }
    //              else if(pattern[l]==-1){
    //                  if(nums[i+l+1]<nums[i+l]){
    //                      flag=true;
    //                  }
    //                  else{
    //                     flag=false;
    //                      break;
    //                  }
    //              }
    //          }
    //         if(flag==true){
    //           count++;
    //         }
    //      j++;
    //      }
    //  }
    //  return count;
        int n = nums.size();
        int m = pattern.size();
        int ans = 0;
        
        for(int i=0;i<n-m;i++){
            bool patt = false;
            for(int j=0;j<m;j++){
                if(pattern[j] == 1){
                    if(nums[i+j+1] > nums[i+j]){
                        patt = true;
                    }
                    else{
                        patt = false;
                        break;
                    }
                }
                else if(pattern[j] == 0){
                    if(nums[i+j+1] == nums[i+j]){
                        patt = true;
                    }
                    else{
                        patt = false;
                        break;
                    }
                }
                else{
                    if(nums[i+j+1] < nums[i+j]){
                        patt = true;
                    }
                    else{
                        patt = false;
                        break;
                    }
                }
            }
            if(patt == true) ans++;
        }
        
        return ans;
    }
};