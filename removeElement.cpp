#include <iostream>
using namespace std;
#include <vector>

/*
给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度。
不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
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