#include <iostream>
using namespace std;
#include <vector>
/**
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。
你可以假设数组中无重复元素。
输入: [1,3,5,6], 5
输出: 2
输入: [1,3,5,6], 2
输出: 1
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