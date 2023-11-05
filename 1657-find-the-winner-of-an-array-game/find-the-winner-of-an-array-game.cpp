class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
       int ans=arr[0];
       int max_ele=*max_element(arr.begin(), arr.end()); 
       if(k>=arr.size()){
           return max_ele;
       }
       int count=0;
       int n=arr.size();
       for(int i=1; i<n; i++){
            if(ans>arr[i]){
                count++;
            }
            else{
                count=1;
                ans=arr[i];
            }
            if(count==k){
                return ans;
            }
       }
       return max_ele;
    }
};