#include <iostream>
using namespace std;

/**
给定两个非空链表来表示两个非负整数。位数按照逆序方式存储，它们的每个节点只存储单个数字。将两数相加返回一个新的链表。
你可以假设除了数字 0 之外，这两个数字都不会以零开头。
示例：
输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807
*/


 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (l1 == NULL && l2 == NULL)
        {
            return NULL;
        }
        if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
        {
            return l1;
        }
        ListNode *pHead = NULL, *pTail = NULL;
        int flag_jinwei = 0;
        ListNode *pl1 = l1;
        ListNode *pl2 = l2;
        int tempsum = 0;
        while (pl1 != NULL && pl2 != NULL)
        {
            tempsum = pl1->val + pl2->val + flag_jinwei;
            if (tempsum >= 10)
            {
                tempsum = tempsum - 10;
                flag_jinwei = 1;
            }
            else
            {
                flag_jinwei = 0;
            }
            ListNode *p = new ListNode(tempsum);
            p->next = NULL;

            if (pHead == NULL)
            {
                pHead = p;
                pTail = p;
            }
            else
            {
                pTail->next = p;
                pTail = p;
            }
            pl1 = pl1->next;
            pl2 = pl2->next;
        }
        while (pl1 != NULL)
        {
            tempsum = pl1->val + flag_jinwei;
            if (tempsum >= 10)
            {
                tempsum = tempsum - 10;
                flag_jinwei = 1;
            }
            else
            {
                flag_jinwei = 0;
            }
            ListNode *p = new ListNode(tempsum);
            p->next = NULL;
            pTail->next = p;
            pTail = p;
            pl1 = pl1->next;
        }
        while (pl2 != NULL)
        {
            tempsum = pl2->val + flag_jinwei;
            if (tempsum >= 10)
            {
                tempsum = tempsum - 10;
                flag_jinwei = 1;
            }
            else
            {
                flag_jinwei = 0;
            }
            ListNode *p = new ListNode(tempsum);
            p->next = NULL;
            pTail->next = p;
            pTail = p;
            pl2 = pl2->next;
        }
        if (flag_jinwei != 0)
        {
            ListNode *p = new ListNode(flag_jinwei);
            p->next = NULL;
            pTail->next = p;
            pTail = p;
        }
        return pHead;
    }

};


/**思路2：将其中一个表数据全部拷贝到新表中，然后将第二个表数据跟新表相加，如果新表节点为NULL而第二个表节点不为NULL则新增加节点，见addTwoNumbers.cpp
*/
