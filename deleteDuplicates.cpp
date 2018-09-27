#include <iostream>
using namespace std;

/*给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。
输入: 1->1->2
输出 : 1->2
输入 : 1->1->2->3->3
输出 : 1->2->3
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






