#include <vector>
#include <unordered_map>
using namespace std;
//set approach
class Solution {
public:
    // Function to find two indices whose values sum up to the target
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hash map to store the number and its index
        unordered_map<int, int> s;
        
        // Iterate through each number in the array
        for (int i = 0; i < nums.size(); i++) {
            // Check if the complement of the current number exists in the hash map
            if (s.find(target - nums[i]) != s.end()) {
                // If the complement exists, return the indices of the current number
                // and the complement number
                return {s[target - nums[i]], i};
            }
            // Store the index of the current number in the hash map
            s[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found (though problem states there will be one)
        return {};
    }
};
