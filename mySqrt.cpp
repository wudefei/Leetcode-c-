#include <iostream>
using namespace std;
/**
ʵ�� int sqrt(int x) ������
���㲢���� x ��ƽ���������� x �ǷǸ�������
���ڷ������������������ֻ���������Ĳ��֣�С�����ֽ�����ȥ��
����: 4
���: 2
����: 8
���: 2
˵��: 8 ��ƽ������ 2.82842...,
���ڷ���������������С�����ֽ�����ȥ��
˼·������1�����ַ�������2��ţ�ٵ�������
*/
class Solution {
public:
    int mySqrt(int x) {
        if (x < 0)
        {
            return -1;
        }
        long long i = 0;
        long long j = x / 2 + 1;
        while (i <= j)
        {
            long long mid = (i + j) / 2;
            long long sqr = mid * mid;
            if (sqr == x)
            {
                return mid;
            }
            if (sqr < x)
            {
                i = mid + 1;
            }
            else
            {
                j = mid - 1;
            }
        }
        return j;
    }
};
/****
int main()
{
    Solution *p = new Solution();
    int x = 8;
    int result = p->mySqrt(x);
    cout << result << endl;
    return 0;
}*/
/*
����1��ţ�ٵ�����
int sqrt(int x) {
    if (x == 0) return 0;
    double last = 0;
    double res = 1;
    while (res != last)
    {
        last = res;
        res = (res + x / res) / 2;
    }
    return int(res);
}

*/
//*/
