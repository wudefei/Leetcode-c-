#include <iostream>
using namespace std;

/**
���������ǿ���������ʾ�����Ǹ�������λ����������ʽ�洢�����ǵ�ÿ���ڵ�ֻ�洢�������֡���������ӷ���һ���µ�����
����Լ���������� 0 ֮�⣬���������ֶ��������㿪ͷ��
ʾ����
���룺(2 -> 4 -> 3) + (5 -> 6 -> 4)
�����7 -> 0 -> 8
ԭ��342 + 465 = 807
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


/**˼·2��������һ��������ȫ���������±��У�Ȼ�󽫵ڶ��������ݸ��±���ӣ�����±�ڵ�ΪNULL���ڶ�����ڵ㲻ΪNULL�������ӽڵ㣬��addTwoNumbers.cpp
*/
