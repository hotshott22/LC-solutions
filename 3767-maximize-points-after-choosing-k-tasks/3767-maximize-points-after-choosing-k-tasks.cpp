class Solution {
public:
    long long maxPoints(vector<int>& technique1, vector<int>& technique2, int k) {
        int n = technique1.size();
        long long total = 0;

        // Initial sum using technique1
        for (int x : technique1) {
            total += x;
        }

        // Compute deltas
        vector<int> delta(n);
        for (int i = 0; i < n; i++) {
            delta[i] = technique2[i] - technique1[i];
        }

        // Sort deltas descending
        sort(delta.begin(), delta.end(), greater<int>());

        // Apply up to (n - k) best switches
        for (int i = 0; i < n - k; i++) {
            if (delta[i] > 0) {
                total += delta[i];
            } else {
                break;
            }
        }

        return total;
    }

};