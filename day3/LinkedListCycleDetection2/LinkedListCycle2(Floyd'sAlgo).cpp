#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* s = head;
        ListNode* f = head;

        while (f && f->next) {
            s = s->next;
            f = f->next->next;
            if (s == f) {
                ListNode* temp = head;
                while (temp != s) {
                    temp = temp->next;
                    s = s->next;
                }
                return temp;
            }
        }

        return nullptr;
    }
};
