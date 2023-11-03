class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {

        vector<string>ans;
         stack<int>st;
         int current=1;
         for(int i=0; i<target.size(); i++){
             if(target[i]>current){
                 while(current<target[i]){
                     ans.push_back("Push");
                     ans.push_back("Pop");
                     current++;
                 }
             }
             if(current==target[i]){
             ans.push_back("Push");
            current++;
             }
 
         }
        return ans;
    }
};