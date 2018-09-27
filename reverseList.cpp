#include <iostream>
using namespace std;

//
// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL)
        {
            return NULL;
        }
        ListNode *p = head;
        ListNode *q = head;
        while (head != NULL)
        {
            if (p == head)
            {
                head = head->next;
                q->next = NULL;
            }
            else
            {
                p = head;
                head = head->next;
                p->next = q;
                q = p;
            }
        }
        head = p;
        p = NULL;
        q = NULL;
        return head;
    }
};



