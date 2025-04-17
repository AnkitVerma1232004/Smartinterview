#include <iostream>
#include <vector>
#include <cmath> 

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        
        // Mark the presence of each number
        for (int j = 0; j < n; j++) {
            int i = abs(nums[j]) - 1;  // map value to index
            if (nums[i] > 0)
                nums[i] *= -1;
        }
        
        // Collect missing numbers
        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0)
                res.push_back(i + 1);
        }
        
        return res;
    }
};
