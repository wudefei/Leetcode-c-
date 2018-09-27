#include <iostream>
using namespace std;
#include <vector>
/*
����һ����������ɵķǿ���������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢һ�����֡�
����Լ���������� 0 ֮�⣬��������������㿪ͷ��
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

