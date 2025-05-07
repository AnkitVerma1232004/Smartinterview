/**
 * Definition for singly-linked list node.
 * The ListNode class represents each node of the singly linked list.
 */
class ListNode {
    public:
        int val;
        ListNode *next;
    
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    
    /**
     * Class Solution provides a method to check whether a singly linked list is a palindrome.
     * 
     * Approach: 
     * - Use fast and slow pointers to find the middle of the list.
     * - Reverse the second half of the list.
     * - Compare the first half and the reversed second half.
     * 
     * Time Complexity: O(N)
     * Space Complexity: O(1)
     */
    class Solution {
    public:
        // Helper function to reverse a linked list
        ListNode* reverse(ListNode* head) {
            ListNode* prev = nullptr;
            ListNode* curr = head;
            while (curr != nullptr) {
                ListNode* next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            return prev;
        }
    
        // Function to check if the linked list is a palindrome
        bool isPalindrome(ListNode* head) {
            // Find the middle using slow and fast pointers
            ListNode* slow = head;
            ListNode* fast = head;
            while (fast != nullptr && fast->next != nullptr) {
                slow = slow->next;
                fast = fast->next->next;
            }
    
            // Reverse the second half of the list
            ListNode* revnode = reverse(slow);
    
            // Compare first and second half
            while (revnode) {
                if (head->val != revnode->val)
                    return false;
                head = head->next;
                revnode = revnode->next;
            }
            return true;
        }
    };
    