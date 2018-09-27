#include <iostream>
using namespace std;
#include <vector>
/**
����һ���������飬����Ҫ��ԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Σ������Ƴ���������³��ȡ�
��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�
**/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 1)
        {
            return nums.size();
        }
        vector<int>::iterator itor = nums.begin() + 1;
        for (; itor != nums.end();)
        {
            if (*itor == *(itor - 1))
            {
                itor = nums.erase(itor);
            }
            else
            {
                itor++;
            }
        }
        return nums.size();
    }
};
/***
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int ans = 1;
        for(int i = 1 ; i < nums.size(); i ++) {
            if(nums[i] == nums[i-1]) continue;
                nums[ans++] = nums[i];
    }
    return ans;
    }
};
int main()
{
    vector<int> vec = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
    Solution *solu = new Solution;
    int size = solu->removeDuplicates(vec);
    cout << size << endl;
    return 0;
}
*/