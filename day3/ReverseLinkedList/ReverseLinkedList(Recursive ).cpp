// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    // Helper function to reverse the linked list recursively
    // It takes the head of the list by reference so we can modify it directly
    void Reverse(ListNode*& head) {
        // Base case: If the list is empty or has only one node, it's already reversed
        if (head == nullptr || head->next == nullptr)
            return;

        // Store the next node (we will reverse the rest of the list recursively)
        ListNode* temp = head->next;

        // Recursive call to reverse the rest of the list starting from the second node
        Reverse(temp);

        // After recursion, head->next is the last node in the original list
        // We need to link it back to head to reverse the pointer direction
        head->next->next = head;

        // Set the original head's next pointer to nullptr to mark the end of the list
        head->next = nullptr;

        // Now, temp holds the new head of the reversed list, so we update head
        head = temp;
    }

    // Function to initiate the reversal of the entire list and return the new head
    ListNode* reverseList(ListNode* head) {
        // Call the helper function to reverse the list
        Reverse(head);      

        // Return the new head of the reversed list
        return head;
    }
};
