// class Solution {
// public:
//     long long subArrayRanges(vector<int>&arr){
        // long long ans=0;
        // int n=arr.size();
        // long long summin=0;
        // for(int i=0;i<n; i++){
        //     int minele=arr[i];
        //    for(int j=i; j<n; j++){
        //        minele=min(minele,arr[j]);
        //        summin=summin+minele;
        //    }
        // }
        // long long summax=0;
        // for(int i=0;i<n; i++){
        //     int maxele=arr[i];
        //     for(int j=i; j<n; j++){
        //         maxele=max(maxele,arr[j]);
        //        cout<<maxele<<" ";
        //         summax=summax+maxele;
        //     }
        // }
        // ans=summax-summin;
        // return ans;
        class Solution {
public:
    long long subArrayRanges(vector<int>& nums) 
	{
		  long long ans =0;
          for(int i=0;i<nums.size();i++)
		  {
		       long long max = INT_MIN;
			   long long min = INT_MAX;
			   
			   for(int j=i;j<nums.size();j++)
			   {
			   	    if(nums[j] > max)
			   	    {
			   	       max = nums[j];	
			        }
			        if(nums[j] < min)
			        {
			        	min = nums[j];
					}
					ans = ans + (max - min);
			   }	
		  }    
		  return ans;
    }
};
        
//     }
// };