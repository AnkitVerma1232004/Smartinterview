#include <iostream>
#include <vector>
using namespace std;
//In this approch i am using fast and slow pointer with is s,f.
//this nums acts like a linked list numbers and index nums[i] indexing point to number .
// example nums={1, 3, 4, 2, 2}; nums[0]  nums [0] which is 1. 
// i.e 0 ->1 simlarly nums[1]=3 i.e 1->3
// once again nums[3]=2;  1->3->2
// and so on  we get 1->3->2->4->2
//duplicateNumberLinkListExample.png image in same directory
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int s = nums[0], f = nums[0];
        for (;;) {
            s = nums[s];
            f = nums[nums[f]];
            if (f == s)
                break;
        }
        int temp = nums[0];
        while (s != temp) {
            s = nums[s];
            temp = nums[temp];
        }
        return temp;
    }
};
