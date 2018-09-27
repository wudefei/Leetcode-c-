#include <iostream>
using namespace std;


 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
        {
            return l1;
        }
        ListNode *pl1 = l1;
        ListNode *pl2 = l2;
        ListNode *pHead = NULL;
        ListNode *p = NULL;
        while(pl1&& pl2)
        {
            if (pl1->val > pl2->val)
            {
                if (pHead == NULL)
                {
                    pHead = pl2;
                    p = pl2;
                    pl2 = pl2->next;
                }
                else
                {
                    p->next = pl2;
                    p = p->next;
                    pl2 = pl2->next;  
                }
            }
            else
            {
                if (pHead == NULL)
                {
                    pHead = pl1;
                    p = pl1;
                    pl1 = pl1->next;
                }
                else
                {
                    p->next = pl1;
                    p = p->next;
                    pl1 = pl1->next;
                }
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
        return pHead;
    }
};
/*
int main()
{
    ListNode *p1,*p2;
    ListNode *l1 = NULL, *l2 = NULL;
    int array1[3] = { 1, 2, 4 };
    int array2[3] = { 1, 3, 4 };
    for (int i = 0; i < 3; i++)
    {
        ListNode *p = new ListNode(array1[i]);
        p->next = NULL;
        if (l1 == NULL)
        {
            l1 = p;
            p1 = p;
        }
        else
        {
            p1->next = p;
            p1 = p;
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        ListNode *p = new ListNode(array2[i]);
        p->next = NULL;
        if (l2 == NULL)
        {
            l2 = p;
            p2 = p;
        }
        else
        {
            p2->next = p;
            p2 = p;
        }
        
    }
    Solution solu;
    ListNode *result = solu.mergeTwoLists(l1,l2);
    p1 = result;
    while (p1 != NULL)
    {
        cout << " " << p1->val;
        p1 = p1->next;
    }

    return 0;
}
*/