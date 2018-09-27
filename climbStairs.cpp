#include <iostream>
using namespace std;
/*
假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
注意：给定 n 是一个正整数。
示例 1：
输入： 2
输出： 2
解释： 有两种方法可以爬到楼顶。
1.  1 阶 + 1 阶
2.  2 阶
示例 2：
输入： 3
输出： 3
解释： 有三种方法可以爬到楼顶。
1.  1 阶 + 1 阶 + 1 阶
2.  1 阶 + 2 阶
3.  2 阶 + 1 阶
思路：f(n) = f(n-1) + f(n-2)
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
递归方法实现：缺点（递归太深，程序超时）；因此需要考虑非递归方式
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



