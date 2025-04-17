#include <iostream>
#include <vector>
using namespace std;

//floyd's tortoise and hare algorithm (fast and slow pointers) approach

// where `s` is the slow pointer and `f` is the fast pointer.
// The array `nums` behaves like a linked list where the value at an index represents the next node.
//
// Example: nums = {1, 3, 4, 2, 2}
// nums[0] = 1   → 0 → 1
// nums[1] = 3   → 1 → 3
// nums[3] = 2   → 3 → 2
// nums[2] = 4   → 2 → 4
// nums[4] = 2   → 4 → 2 (cycle)
// Hence, the linked structure is: 0 → 1 → 3 → 2 → 4 → 2
// As you can see, the value `2` repeats, forming a cycle in the graph (linked list representation).
// We use the cycle detection method to find the entry point of the cycle,
// which is the duplicate number.
//
// See: duplicateNumberLinkListExample.png image in the same directory

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Phase 1: Detect cycle using Floyd’s Tortoise and Hare
        int s = nums[0], f = nums[0];
        while (true) {
            s = nums[s];           // move one step
            f = nums[nums[f]];     // move two steps
            if (s == f) break;     // cycle detected
        }

        // Phase 2: Find the entrance to the cycle
        int temp = nums[0];
        while (s != temp) {
            s = nums[s];
            temp = nums[temp];
        }

        // The point of intersection is the duplicate number
        return temp;
    }
};
