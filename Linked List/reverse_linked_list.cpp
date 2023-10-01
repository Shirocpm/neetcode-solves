class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL;
        ListNode *curr = head;

        while (curr != NULL) {
            ListNode *frwrd = curr ->next;
            curr ->next = prev;
            prev = curr;
            curr = frwrd;
        }
        return prev;
    }
};
