class Solution {
public:
    void rev(string &temp){
        int n=temp.size();
        int start=0;
        int end=n-1;
        while(start<=end){
            swap(temp[start],temp[end]);
            start++;
            end--;
        }
    }
    string finalString(string s){
        string temp="";
        int n=s.size();
        for(int i=0; i<n; i++){
            if(s[i]=='i'){
                rev(temp);
            }
            else{
                temp+=s[i];
            }
        }
        return temp;
        
    }
};