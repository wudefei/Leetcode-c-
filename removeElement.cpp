#include <iostream>
using namespace std;
#include <vector>

/*
����һ������ nums ��һ��ֵ val������Ҫԭ���Ƴ�������ֵ���� val ��Ԫ�أ������Ƴ���������³��ȡ�
��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�
**/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if (n <= 0)
        {
            return 0;
        }
        vector<int>::iterator itor = nums.begin();
        for (; itor != nums.end(); )
        {
            if (*itor == val)
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

/**
class Solution {
public:
int removeElement(vector<int>& nums, int val) {
int i = 0;
int j = 0;
for(i = 0; i < nums.size(); i++) {
if(nums[i] == val) {
continue;
}
nums[j] = nums[i];
j++;
}
return j;
}
};
int main()
{
    vector<int> vec = { 0, 1, 2, 2, 3, 0, 4, 2 };
    int val = 2;
    Solution *solu = new Solution;
    int size = solu->removeElement(vec,val);
    cout << size << endl;
    return 0;
}
*/