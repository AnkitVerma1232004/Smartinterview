/**
 * Definition for singly-linked list.
 * The ListNode class is used to represent a node in the linked list.
 */
class ListNode {
    public:
        int val;
        ListNode *next;
    
        // Constructor to create a ListNode with a given value
        ListNode() : val(0), next(nullptr) {}
    
        // Constructor to create a ListNode with a given value
        ListNode(int x) : val(x), next(nullptr) {}
    
        // Constructor to create a ListNode with a given value and a next node pointer
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    
    /**
     * Class Solution reverses a singly linked list iteratively.
     * 
     * Approach:
     * - Use three pointers (`prev`, `curr`, `next`) to reverse the list.
     * - `prev` tracks the previous node, `curr` is the current node, and `next` holds the next node.
     * 
     * Time Complexity: O(N), where N is the number of nodes.
     * Space Complexity: O(1), using constant space.
     */
    class Solution {
    public:
        // Function to reverse a singly linked list iteratively
        ListNode* reverseList(ListNode* head) {
            if (!head || !head->next) 
                return head;
    
            ListNode* prev = nullptr;
            ListNode* curr = head;
            ListNode* next = head->next;
    
            while (curr->next) {
                curr->next = prev;
                prev = curr;
                curr = next;
                next = next->next;
            }
    
            curr->next = prev;
            return curr;
        }
    };
    