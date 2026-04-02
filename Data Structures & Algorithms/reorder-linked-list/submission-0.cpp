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
    void reorderList(ListNode* head) {
        vector<ListNode*> res;

        ListNode* h = head;
        while(h != nullptr)
        {
            res.push_back(h);
            h = h->next;
        }

        unsigned i = 0; unsigned j = res.size()-1; 
        ListNode* t = head;

        while ( i < j)
        {
            res[i]->next = res[j];
            i++;
            if ( i >= j) {break;}
            res[j]->next = res[i];
            j--;
        }

        res[i]->next = nullptr;
    }
};
