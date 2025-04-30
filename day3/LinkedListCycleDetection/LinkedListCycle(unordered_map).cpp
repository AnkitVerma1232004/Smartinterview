#include <unordered_map>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, bool> visited;
        ListNode *temp = head;

        while (temp != nullptr) {
            if (visited[temp]) {
                return true; 
            }
            visited[temp] = true;
            temp = temp->next;
        }

        return false; 
    }
};
