#include <iostream>
using namespace std;
/*
������������¥�ݡ���Ҫ n ������ܵ���¥����
ÿ��������� 1 �� 2 ��̨�ס����ж����ֲ�ͬ�ķ�����������¥���أ�
ע�⣺���� n ��һ����������
ʾ�� 1��
���룺 2
����� 2
���ͣ� �����ַ�����������¥����
1.  1 �� + 1 ��
2.  2 ��
ʾ�� 2��
���룺 3
����� 3
���ͣ� �����ַ�����������¥����
1.  1 �� + 1 �� + 1 ��
2.  1 �� + 2 ��
3.  2 �� + 1 ��
˼·��f(n) = f(n-1) + f(n-2)
*/

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 0)
        {
            return 0;
        }
        if (n == 1 || n == 2)
        {
            return n;
        }
        int n1 = 1;
        int n2 = 2;
        int temp = 0;
        for (int i = 3; i <= n; i++)
        {
            temp = n1 + n2;
            n1 = n2;
            n2 = temp;
        }
        return n2;
    }
};


/**
�ݹ鷽��ʵ�֣�ȱ�㣨�ݹ�̫�����ʱ���������Ҫ���Ƿǵݹ鷽ʽ
int climbStairs(int n) {
if (n <= 0)
{
return 0;
}
if (n == 1)
{
return 1;
}
if (n == 2)
{
return 2;
}
return climbStairs(n - 1) + climbStairs(n-2);
}

*/



