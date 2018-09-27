#include <iostream>
using namespace std;
/**
实现 int sqrt(int x) 函数。
计算并返回 x 的平方根，其中 x 是非负整数。
由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。
输入: 4
输出: 2
输入: 8
输出: 2
说明: 8 的平方根是 2.82842...,
由于返回类型是整数，小数部分将被舍去。
思路：方法1：二分法；方法2：牛顿迭代法：
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
方法1：牛顿迭代法
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
