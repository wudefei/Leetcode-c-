#include <iostream>
using namespace std;
#include <vector>
/**
����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
����Լ������������ظ�Ԫ�ء�
����: [1,3,5,6], 5
���: 2
����: [1,3,5,6], 2
���: 1
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (target <= nums[i])
            {
                return i;
            }
        }
        return i;
    }
};
/**
int main()
{
    Solution solu;
    vector<int>vec = { 1, 3, 5, 6 };
    int target = 7;
    int result = solu.searchInsert(vec, target);
    cout << result << endl;
    return 0;
}
*/