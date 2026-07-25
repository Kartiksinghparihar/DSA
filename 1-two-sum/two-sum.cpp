#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Map to store the value of an element and its corresponding index
        std::unordered_map<int, int> seen_numbers; 
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the required number to reach the target has already been seen
            if (seen_numbers.find(complement) != seen_numbers.end()) {
                return {seen_numbers[complement], i};
            }
            
            // If not found, track the current number and its index
            seen_numbers[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found (guaranteed not to hit based on constraints)
        return {};
    }
};
