class Solution {
public:
    // vector<int> twoSum(vector<int>& nums, int target) {
        
    // }

    vector<int> twoSum(vector<int>& nums, int target) {
    // Store the indices of the two elements that add up to the target
    vector<int> indices;

    // Iterate through the array of integers
    for (int i = 0; i < nums.size(); i++) {
        // Use a nested loop to check if any other element adds up to the target
        for (int j = i + 1; j < nums.size(); j++) {
            // If a pair is found that adds up to the target, store their indices and return them
            if (nums[i] + nums[j] == target) {
                indices.push_back(i);
                indices.push_back(j);
                return indices;
            }
        }
    }

    return indices;
}
};