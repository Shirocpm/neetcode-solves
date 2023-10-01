class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *d, *t;
        d = new ListNode(); t = d;

        while (list1 && list2) {
            if (list1 ->val < list2 ->val) {
                t ->next = list1;
                list1 = list1 ->next;
            }
            else {
                t ->next = list2;
                list2 = list2 ->next;
            }
            t = t ->next;
        }
        if (list1) t ->next = list1;
        if (list2) t ->next = list2;

        return d -> next;
    }
};
