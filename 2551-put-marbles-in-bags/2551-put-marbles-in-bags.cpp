class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        vector<int>candidates;
        if(k == 1 || k == n) return 0;
        for(int i = 0; i < n - 1; i++) {
            candidates.push_back(weights[i] + weights[i  + 1]);
        }
        //[4,8,6]
        sort(candidates.begin(), candidates.end());
        //[4,6,8]
        long long min = 0;
        long long max = 0;
        
        for(int i = 0; i < k - 1; i++) {
            min += candidates[i]; //10
            max += candidates[n - i - 2]; //14
        }
        return max - min;
    }
};