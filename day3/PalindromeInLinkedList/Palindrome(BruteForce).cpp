
// Approach: Brute Force (Copy values to vector, then use two-pointer check)

#include <vector>
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> vals;
        ListNode* temp = head;

        // Copy values from the linked list to a vector
        while (temp) {
            vals.push_back(temp->val);
            temp = temp->next;
        }

        // Check if vector is a palindrome using two-pointer technique
        int i = 0, j = vals.size() - 1;
        while (i < j) {
            if (vals[i] != vals[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
};
