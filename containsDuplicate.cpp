#include <iostream>
using namespace std;
#include <vector>
#include <map>
/*
����һ���������飬�ж��Ƿ�����ظ�Ԫ�ء�
����κ�ֵ�������г����������Σ��������� true�����������ÿ��Ԫ�ض�����ͬ���򷵻� false��
����: [1,2,3,1]
���: true
����: [1,2,3,4]
���: false
����: [1,1,1,3,3,4,3,2,4,2]
���: true
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
