#include <iostream>
using namespace std;
#include <vector>


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if (n<=1)
        {
            return lists[0];
        }
        ListNode *p = lists[0];
        for (int i = 1; i < n; i++)
        {
            p = mergetwolist(p, lists[i]);
        }
        return p;
    }
    ListNode *mergetwolist(ListNode *list1, ListNode *list2)
    {
        ListNode *phead;
        ListNode *pl1 = list1;
        ListNode *pl2 = list2;
        ListNode *p = NULL;
        if (pl1->val > pl2->val)
        {
            phead = pl1;
            pl1 = pl1->next;
        }
        else
        {
            phead = pl2;
            pl2 = pl2->next;
        }
        
        p = phead;
        while (pl1 && pl2)
        {
            if (pl1->val >= pl2->val)
            {
                p->next = pl1;
                p = pl1;
                pl1 = pl1->next;
            }
            else
            {
                p->next = pl2;
                p = pl2;
                pl2 = pl2->next;
            }
        }
        if (pl1)
        {
            p->next = pl1;
        }
        if (pl2)
        {
            p->next = pl2;
        }

        return phead;
    }
};



