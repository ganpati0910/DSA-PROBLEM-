class Solution {
public:
    int splitNum(int num){
        int sum1=0;
        int sum2=0;
        int ans1=INT_MAX;
        vector<int>ans;
        while(num>0){
            int a=num%10;
            ans.push_back(a);
            num=num/10;
        }
        sort(ans.begin(),ans.end());
        for(int i=0; i<ans.size(); i++){
            if(i%2==0){
                sum1=sum1*10+ans[i];
            }
            else{
                sum2=sum2*10+ans[i];
            }
        }
        return sum1+sum2;
        
    }
};