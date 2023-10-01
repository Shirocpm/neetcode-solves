class Solution {
public:
    vector<int > ist(ListNode* head) {
        ListNode *temp = head;
        vector<int > v;

        while (temp) {
            v.push_back(temp ->val);
            temp = temp ->next;
        }
        return v;
    }
    void reorderList(ListNode* head) {
        vector<int > v = ist(head);
        ListNode *temp = head;
        int f = 0, l = v.size()-1, c = 0;

        while (c < v.size()) {
            if (c & 1) { temp ->val = v[l]; l--;}
            else       { temp ->val = v[f]; f++;}
          
            temp = temp ->next; c++;
        }
    }
};
