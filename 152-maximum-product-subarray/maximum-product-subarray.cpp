class Solution {
public:
    int maxProduct(vector<int>& nums){ 
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0; i<n; i++){
            int prod=1;
            for(int j=i; j<n; j++){
                prod=prod*nums[j];
                maxi=max(prod,maxi);
            }
        }
        return maxi;
         
        
        //  int n=nums.size();
        //  int maxi1=INT_MIN;
        //  int maxi2=INT_MIN;
        //  int prod=1;
        //  for(int i=0; i<n; i++){
        //      prod=prod*nums[i];
        //      maxi1=max(prod,maxi1);
        //      if(prod==0){
        //          prod=1;
        //      }
        //  }
        //  int prod1=1;
        //  for(int i=n-1; i>=0; i--){
        //      prod1=prod1*nums[i];
        //      maxi2=max(prod1,maxi2);
        //      if(prod1==0){
        //          prod1=1;
        //      }
        //  }
        //  return max(maxi1,maxi2);

    }
};