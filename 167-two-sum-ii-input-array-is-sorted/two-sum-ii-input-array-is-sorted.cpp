class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // int n=numbers.size();
        // for(int i=0; i=n-1; i++){
        //     for(int j=i+1; j=n-1; j++){
        //         if(numbers[i]+numbers[j]==target){
        //             return {i+1,j+1};
                    
        //         }
        //     }
        // }
        // return {};
        int start=0;
        int end=numbers.size()-1;
        while(start<end){
            if(numbers[start]+numbers[end]==target){
                return {start+1,end+1};
            }
            else if(numbers[start]+numbers[end]>target){
                end--;
            }
            else{
                start++;
            }
        }
        return {-1,-1};
    }
};