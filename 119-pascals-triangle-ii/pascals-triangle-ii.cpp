class Solution {
public:
   vector<int> getRow(int r) {
    vector<vector<int>> out;
    out.push_back({1}); // Initialize the first row.

    for (int i = 1; i <= r; i++) { // Start from the second row.
        vector<int> in;
        in.push_back(1);

        for (int j = 1; j < out[i - 1].size(); j++) {
            int h = out[i - 1][j] + out[i - 1][j - 1];
            in.push_back(h);
        }

        in.push_back(1);
        out.push_back(in);
    }

    return out[r];
}

           
};