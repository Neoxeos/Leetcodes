/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {return head;}
        ListNode* h = head;
        ListNode* n = head->next;
        h->next = nullptr;

        while (n != nullptr)
        {
            ListNode* l = n->next;
            n->next = h;
            h = n;
            n = l;
        }

        return h;
    }
};
