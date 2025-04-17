#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//binarySearch approach 
class Solution {
public:
    // Recursive binary search to find the first index where value >= key
    int binarySearch(const vector<int>& arr, int l, int r, int key) {
        if (l >= r) return l;  // Base case: when the range is narrowed down
        int mid = (l + r) / 2;
        if (arr[mid] < key)
            return binarySearch(arr, mid + 1, r, key);  // Move right
        else
            return binarySearch(arr, l, mid, key);  // Move left
    }

    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end()); // Sort the array for binary search

        vector<int> res;

        // For each number, use recursive binary search to find how many are smaller
        for (int i = 0; i < nums.size(); i++) {
            int cnt = binarySearch(sorted, 0, sorted.size(), nums[i]);
            res.push_back(cnt);
        }

        return res;
    }
};
