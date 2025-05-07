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
        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
            ListNode* dummy = new ListNode(); // Dummy node to simplify the process
            ListNode* tail = dummy;  // This will be the tail of the merged list
            
            // Iterate through both lists
            while (l1 != nullptr && l2 != nullptr) {
                if (l1->val < l2->val) {
                    // Create a new node with l1's value and move the pointer
                    tail->next = new ListNode(l1->val);
                    l1 = l1->next;
                } else {
                    // Create a new node with l2's value and move the pointer
                    tail->next = new ListNode(l2->val);
                    l2 = l2->next;
                }
                // Move the tail pointer forward
                tail = tail->next;
            }
    
            // If l1 is not fully traversed, add the remaining nodes to the merged list
            while (l1 != nullptr) {
                tail->next = new ListNode(l1->val);
                l1 = l1->next;
                tail = tail->next;
            }
    
            // If l2 is not fully traversed, add the remaining nodes to the merged list
            while (l2 != nullptr) {
                tail->next = new ListNode(l2->val);
                l2 = l2->next;
                tail = tail->next;
            }
    
            // Return the merged list starting from dummy->next
            ListNode* mergedList = dummy->next;
            delete dummy;  // Clean up the dummy node
    
            return mergedList;
        }
    };
    