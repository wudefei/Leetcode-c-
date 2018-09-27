#include <iostream>
using namespace std;
#include <vector>
/*
给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。
最高位数字存放在数组的首位， 数组中每个元素只存储一个数字。
你可以假设除了整数 0 之外，这个整数不会以零开头。
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.size() == 0)
        {
            return digits;
        }
        vector<int>::iterator itor = digits.end() - 1;
        int num = 0;
        int flag = 0;
        while (itor >= digits.begin())
        {
            if (itor == digits.end()-1)
            {
                num = *itor + flag + 1;
            }
            else
            {
                num = *itor + flag;
            }

            if (num > 9)
            {
                num = num % 10;
                flag = 1;
            }
            else
            {
                flag = 0;
            }
            *itor = num;
            if (itor == digits.begin())
            {
                break;
            }
            itor--;
        }
        if (flag == 1)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
/*
int main()
{
    Solution solu;
    vector<int>vec = {0};
    vector<int>result = solu.plusOne(vec);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}
*/

