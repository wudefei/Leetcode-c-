#include <iostream>
using namespace std;
#include <vector>
#include <map>
/*
给定一个整数数组，判断是否存在重复元素。
如果任何值在数组中出现至少两次，函数返回 true。如果数组中每个元素都不相同，则返回 false。
输入: [1,2,3,1]
输出: true
输入: [1,2,3,4]
输出: false
输入: [1,1,1,3,3,4,3,2,4,2]
输出: true
*/
/*
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1)
        {
            return false;
        }
        map<int, int>mymap;
        for (int i = 0; i < n; i++)
        {
            if (mymap.find(nums[i]) != mymap.end())
            {
                return true;
            }
            else
            {
                mymap[nums[i]] = 1;
            }
        }
        return false;
    }
};


int main()
{
    Solution solu;
    vector<int> vec = {1,2,3,1};
    bool result = solu.containsDuplicate(vec);
    if (result == false)
    {
        cout << "false" << endl;
    }
    else
    {
        cout << "true" << endl;
    }
    return 0;
}
*/
class Solution {
public:
    string reverseString(string s) {
        int n = s.length();
        if (n <= 1)
        {
            return s;
        }
        int i = 0;
        int j = n - 1;
        char temp;
        while (i<j)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
        return s;
    }
};
