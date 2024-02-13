class Solution {
public:
    int countSegments(string s){
        int n=s.size();
        if(n==1&&s[0]!=' '){
            return 1;
        }
        int count=0;
        for(int i=1; i<n; i++){
            if((s[i]==' '&&s[i-1]!=' ')||(i==n-1&&s[i]!=' ')){
                count++;
            }
        }
        return count;
    }
};