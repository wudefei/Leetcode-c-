#include <iostream>
using namespace std;

/*����һ����������ɾ�������ظ���Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Ρ�
����: 1->1->2
��� : 1->2
���� : 1->1->2->3->3
��� : 1->2->3
*/
// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
        {
            return NULL;
        }
        ListNode *p = head;
        while (p->next != NULL)
        {
            if (p->val == p->next->val)
            {
                ListNode *del = p->next;
                p->next = p->next->next;
                free(del);
            }
            else
            {
                p = p->next;
            }
        }
        return head;
    }
};






