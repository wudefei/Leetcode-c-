#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include <stdlib.h>

/**
����һ�����������һ��Ŀ��ֵ���ҳ������к�ΪĿ��ֵ����������
����Լ���ÿ������ֻ��Ӧһ�ִ𰸣���ͬ����Ԫ�ز��ܱ��ظ����á�
ʾ��:
���� nums = [2, 7, 11, 15], target = 9
��Ϊ nums[0] + nums[1] = 2 + 7 = 9
���Է��� [0, 1]
*/

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int>vec;
        int N = nums.size();
        map<int, int> submap;
        int temp = 0;
        map<int, int>::iterator itor;
        for (int i = 0; i < N; i++)
        {
            temp = target - nums[i];
            itor = submap.find(temp);
            if (itor != submap.end())
            {
                vec.push_back(i);
                vec.push_back(itor->second);
            }
            submap[nums[i]] = i;
        }
        return vec;
    }
};

/*
int main()
{
    Solution *solu = new Solution();
    vector<int>vect;
    int target = 9;

    vect.push_back(2);
    vect.push_back(7);
    vect.push_back(11);
    vect.push_back(15);
    vector<int>result = solu->twoSum(vect, target);
    for (vector<int>::iterator itor = result.begin(); itor != result.end(); itor++)
    {
        cout << *itor << " ";
    }
    return 0;
}
*/
