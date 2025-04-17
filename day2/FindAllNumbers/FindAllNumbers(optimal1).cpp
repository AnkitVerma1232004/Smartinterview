#include <iostream>
#include <vector>
using namespace std;
//prefix approach
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 0);
        
        // Step 1: Update prefix count array
        for (int num : nums) {
            prefix[num - 1] = 1;  // Mark the number 'num' as found
        }
        
        // Step 2: Collect the missing numbers
        vector<int> missingNumbers;
        for (int i = 0; i < n; i++) {
            if (prefix[i] == 0) {  // If 'i+1' is not found, it's missing
                missingNumbers.push_back(i + 1);
            }
        }
        
        return missingNumbers;
    }
};
