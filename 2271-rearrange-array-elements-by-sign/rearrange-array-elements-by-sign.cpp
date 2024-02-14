class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums){
    vector<int>positive;
    vector<int>negative;
    vector<int>ans;
    int n=nums.size();
    for(int i=0; i<n; i++){
        if(nums[i]>0){
            positive.push_back(nums[i]);
        }
        else{
            negative.push_back(nums[i]);
        }
    }
    int k=0;
    int l=0;
    for(int i=0; i<n; i++){
        if(i%2==0){
            ans.push_back(positive[k]);
            k++;
        }
        else{
            ans.push_back(negative[l]);
            l++;
        }
    }
    return ans;      
    }
};