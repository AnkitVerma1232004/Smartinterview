#include <iostream>
#include <vector>
using namespace std;

//bruteForce approach
class Solution {
public:
    // Function to find the duplicate number in the array
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        // Iterate through each element and check for duplicates using nested loops
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    return nums[i];  // Return the duplicate number when found
                }
            }
        }
        
        // Return -1 if no duplicate is found (though the problem guarantees one)
        return -1;  
        /* This approach has O(n^2) time complexity due to the nested loops.
           With the constraint 1 <= n <= 10^5, this will result in a time complexity
           of up to 10^10 operations, making it too slow for larger inputs. */
    }
};
