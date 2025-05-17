struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head->next) return nullptr;
        ListNode* tail = head;
        ListNode* dummy = head;

        while (head->next) {
            head = head->next;
            if (n == 0) tail = tail->next;
            else n--;
        }
        if (n > 0) return tail->next;
        tail->next = tail->next->next;
        return dummy;
    }
};