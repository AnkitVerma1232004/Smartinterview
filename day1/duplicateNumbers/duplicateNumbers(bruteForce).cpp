#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    return nums[i];
                }
            }
        }
        return -1;  /*  this will not work due to
                        constrains it is slow .
                        O(n^2) and genderal constrain 
                        is 1<=n<=10^5,which is equal 
                        to 10^10 solution.
                    */
    }               
};
