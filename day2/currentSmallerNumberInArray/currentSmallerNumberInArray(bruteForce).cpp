#include <iostream>
#include <vector>
using namespace std;
//bruteForce approach
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 0);  // To store the result for each element
        
        // Brute force approach: Compare each element with every other element
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (nums[i] > nums[j]) {
                    result[i]++;  // If nums[i] is greater than nums[j], increment the count
                }
            }
        }
        
        return result;
    }
};
