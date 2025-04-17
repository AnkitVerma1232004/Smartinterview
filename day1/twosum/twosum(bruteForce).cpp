#include <vector>
using namespace std;
//bruteForce approach
class Solution {
    public:
        // Function to find two indices whose values sum up to the target
        vector<int> twoSum(vector<int>& nums, int target) {
            // Outer loop: Iterate through each element in the array
            for (int i = 0; i < nums.size(); i++) {
                // Inner loop: Check the rest of the elements after the current one
                for (int j = i + 1; j < nums.size(); j++) {
                    // Check if the sum of nums[i] and nums[j] equals the target
                    if ((nums[i] + nums[j]) == target) {
                        // If found, return the indices as a vector
                        vector<int> arr = {i, j};
                        return arr;
                    }
                }
            }
            // If no pair is found, return an empty vector
            return {};
        }
};
