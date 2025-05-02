#include <unordered_map>
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, bool> visited;

        ListNode* temp = head;

        while (temp != nullptr) {
            if (visited[temp]) {
                return temp;
            }
            visited[temp] = true;
            temp = temp->next;
        }

        return nullptr;
    }
};
