#include <iostream>
#include <vector>

using namespace std;
//Counting Sort-based Approach (Count Array with preFix)
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(101, 0);
        vector<int> ans;

        // Count the occurrences of each number in the input array
        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }

        // Update the count array to store the cumulative sum
        for (int i = 1; i < 101; i++) {
            count[i] += count[i - 1];
        }

        // For each element in the input array, find how many are smaller
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                ans.push_back(0);
            else
                ans.push_back(count[nums[i] - 1]);
        }

        return ans;
    }
};
