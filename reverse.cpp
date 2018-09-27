#include <iostream>
using namespace std;
/**
给定一个 32 位有符号整数，将整数中的数字进行反转。
示例 1:
输入: 123
输出: 321
示例 2:
输入: -123
输出: -321
示例 3:
输入: 120
输出: 21
注意:
假设我们的环境只能存储32位有符号整数，其数值范围是[−2^31, 2^31−1].根据这个假设，如果反转后的整数溢出，则返回0。
*/
class Solution {
public:
    int reverse(int x) {
        if ((x>=0 && x<10) || (x<0&&x>-10))
        {
            return x;
        }
        int result = 0;
        int num = x > 0 ? x : -x;
        bool flag = x >= 0 ? true : false;//正数为true，负数为false
        int tempresult = 0;
        while (num > 0)
        {
            tempresult = result * 10 + num % 10;
            if ((tempresult - num % 10) / 10 != result)//出现翻转
            {
                return 0;
            }
            result = tempresult;
            num /= 10;
        }
        if (flag == false)
        {
            result = -result;
        }
        return result;
    }
};
/*
int main()
{
    Solution solu;
    if (solu.reverse(123) == 321)
    {
        cout << "1-OK" << endl;
    }
    else
    {
        cout << "1-NOT OK" << endl;
    }

    if (solu.reverse(-123) == -321)
    {
        cout << "2-OK" << endl;
    }
    else
    {
        cout << "2-NOT OK" << endl;
    }

    if (solu.reverse(120) == 21)
    {
        cout << "3-OK" << endl;
    }
    else
    {
        cout << "3-NOT OK" << endl;
    }
    return 0;
}
*/


