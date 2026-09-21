class Solution {
public:
    int numTrees(int n) {
        vector<int> unique(n + 1, 1);

        for (int nodes = 2; nodes <= n; nodes++) {
            int total = 0;
            for (int root = 1; root <= nodes; root++) {
                total += unique[root - 1] * unique[nodes - root];
            }
            unique[nodes] = total;
        }

        return unique[n];        
    }
};