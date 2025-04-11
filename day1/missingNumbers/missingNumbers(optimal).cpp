#include <vector>
using namespace std;

//optimal
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int totalSum = n * (n + 1) / 2;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        return totalSum - sum;
    }
};
