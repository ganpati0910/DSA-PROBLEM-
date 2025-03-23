class Solution {
public:
    bool canWin(int n, int stonesToRemove) {
        if (n < stonesToRemove) {
            return false;
        }
        
        if (n == stonesToRemove) {
            return true;
        }
        return !canWin(n - stonesToRemove, stonesToRemove - 1);
    }
    bool canAliceWin(int n) {
         return canWin(n, 10);
    }
};