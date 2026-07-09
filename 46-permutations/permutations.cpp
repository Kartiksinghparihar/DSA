class Solution {
public:
    void backtrack(int start, vector<int>& nums, vector<vector<int>>& result) {
        // Base case: if we reach the end of the array, a valid permutation is formed
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }
        
        for (int i = start; i < nums.size(); ++i) {
            // Swap the current element with the element at the 'start' index
            swap(nums[start], nums[i]);
            
            // Move to the next index to place the next element
            backtrack(start + 1, nums, result);
            
            // Undo the swap (backtrack) to restore the original array structure
            swap(nums[start], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(0, nums, result);
        return result;
    }
};
