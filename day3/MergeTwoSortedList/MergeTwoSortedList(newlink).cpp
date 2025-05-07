// Definition for singly-linked list
class ListNode {
    public:
        int val;          // Value of the node
        ListNode* next;   // Pointer to the next node in the list
        ListNode() : val(0), next(nullptr) {} // Default constructor
        ListNode(int x) : val(x), next(nullptr) {} // Constructor with value
        ListNode(int x, ListNode* next) : val(x), next(next) {} // Constructor with value and next node
    };
    
    class Solution {
    public:
        // Function to merge two sorted linked lists
        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
            // Create a dummy node to simplify merging process
            ListNode* dummy = new ListNode(); 
            ListNode* tail = dummy;  // Tail pointer to build the merged list
    
            // Traverse both lists until one is exhausted
            while (l1 && l2) {
                // Compare values and attach the smaller node to the merged list
                if (l1->val < l2->val) {
                    tail->next = l1;  // Attach l1 node to merged list
                    l1 = l1->next;    // Move to the next node in l1
                } else {
                    tail->next = l2;  // Attach l2 node to merged list
                    l2 = l2->next;    // Move to the next node in l2
                }
                tail = tail->next;  // Move the tail pointer to the last node in the merged list
            }
    
            // If one of the lists is not exhausted, attach the remaining nodes
            if (l1) tail->next = l1;
            if (l2) tail->next = l2;
    
            // Get the merged list starting from the first node after the dummy node
            ListNode* merged = dummy->next;
    
            // Delete the dummy node to avoid memory leak
            delete dummy;
    
            // Return the merged list
            return merged;
        }
    };
    