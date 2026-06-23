class Solution {
public:
    void backtrack(vector<int>& candidates, int target, int start, vector<int>& current, vector<vector<int>>& result) {
        // Base case: target is achieved
        if (target == 0) {
            result.push_back(current);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {
            // Skip duplicate elements at the same recursion level
            if (i > start && candidates[i] == candidates[i - 1]) continue;

            // If the current candidate exceeds the target, break (sorted array)
            if (candidates[i] > target) break;

            // Include the current candidate
            current.push_back(candidates[i]);
            // Recur with reduced target and the next index
            backtrack(candidates, target - candidates[i], i + 1, current, result);
            // Backtrack
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        // Sort the input to handle duplicates
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> current;
        backtrack(candidates, target, 0, current, result);
        return result;
    }
};
