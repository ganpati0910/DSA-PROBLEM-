class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string num="123456789";
        vector<int>ans;
        for(int i=0; i<num.size(); i++){
            string x="";
            for(int j=i; j<num.size(); j++){
                x+=num[j];
                int n=stoi(x);
                if(n>=low&&n<=high){
                    ans.push_back(n);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};