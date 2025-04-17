#include <vector>
using namespace std;
// sum of natural numbers formula approach
// Class to find the missing number in a sequence of numbers
class Solution {
public:
    // Function to find the missing number in the array
    int missingNumber(vector<int>& nums) {
        // Initialize sum to 0
        int sum = 0;
        
        // Get the size of the array
        int n = nums.size();
        
        // Calculate the total sum of numbers from 0 to n (inclusive)
        // This is the expected sum of all numbers if no number was missing
        int totalSum = n * (n + 1) / 2;
        
        // Calculate the sum of the numbers in the given array
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        
        // The missing number is the difference between the expected total sum
        // and the actual sum of the numbers in the array
        return totalSum - sum;
    }
};
