class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        queue<int>q;
        int z=x+y;
        vector<int>vis(z+1,0);
        int step[]={x,-x,y,-y};
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            if(node==target){
                return true;
            }
            for(int i=0; i<4; i++){
                int newn=node+step[i];
                if(newn>=0&&newn<=z&&vis[newn]==0){
                    q.push(newn);
                    vis[newn]=1;
                }
            }
        }
        return false;
        
    }
};