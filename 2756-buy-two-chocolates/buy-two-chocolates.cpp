class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
      int mini=INT_MAX;  
      sort(prices.begin(),prices.end());
      for(int i=0; i<prices.size(); i++){
          for(int j=i+1; j<prices.size(); j++){
             int ans=prices[i]+prices[j];
            if(ans<mini){
                mini=ans;
            }
          }
      }
      if(mini<=money){
          return money-mini;
      }
      else{
          return money;
      }
    
    }
};