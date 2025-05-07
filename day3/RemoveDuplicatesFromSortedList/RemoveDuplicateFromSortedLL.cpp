// Leetcode 83 - Remove Duplicates from Sorted List
// Approach: Iterative - Traverse the list and skip duplicate nodes in-place

class ListNode {
    public:
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode* next) : val(x), next(next) {}
    };
    
    class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
            if (!head) return head;
    
            ListNode* current = head;
            while (current->next) {
                if (current->val == current->next->val) {
                    current->next = current->next->next; // Skip duplicate node
                } else {
                    current = current->next; // Move to next node
                }
            }
            return head;
        }
    };
    