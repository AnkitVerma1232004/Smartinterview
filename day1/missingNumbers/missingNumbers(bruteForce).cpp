#include <vector>
#include <iostream>
using namespace std;
//bruteForce approach
class Solution {
    public:
        // Function to find the missing number in the array
        int missingNumber(vector<int>& nums) {
            // Iterate over the range from 0 to nums.size() (inclusive)
            for (int i = 0; i <= nums.size(); i++) {
                bool flag = false;  // Flag to check if the number is found
                
                // Print the value of flag for debugging (optional)
                cout << flag;
                
                // Check if the current number i is present in the array
                for (int j = 0; j < nums.size(); j++) {
                    if (i == nums[j]) {
                        flag = true;  // If found, set flag to true
                    }
                }
                
                // If the number is not found, return it as the missing number
                if (flag == false) {
                    return i;
                }
            }
            
            // Return -1 if no missing number is found (should not occur in a valid input)
            return -1;
        }
};
