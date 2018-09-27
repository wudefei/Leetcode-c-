#include <iostream>
using namespace std;
#include <vector>
/**
给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
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