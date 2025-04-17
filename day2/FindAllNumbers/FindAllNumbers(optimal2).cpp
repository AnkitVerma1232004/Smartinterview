#include <iostream>
#include <vector>
using namespace std;
//swaping nums[i] to correct index
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Swap elements to their correct positions
        for (int i = 0; i < n; i++) {
            while (nums[i] != nums[nums[i] - 1]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        // Step 2: Identify missing numbers
        vector<int> missingNumbers;
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                missingNumbers.push_back(i + 1);
            }
        }

        return missingNumbers;
    }
};
