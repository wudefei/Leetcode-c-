#include <iostream>
using namespace std;
#include <vector>
#include <string>

/**
编写一个函数来查找字符串数组中的最长公共前缀。
如果不存在公共前缀，返回空字符串 ""。
输入: ["flower","flow","flight"]
输出: "fl"
输入: ["dog","racecar","car"]
输出: ""
解释: 输入不存在公共前缀。

说明：所有输入只包含小写字母 a-z 。
***/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 0 || strs[0] == "")
        {
            return "";
        }
        if (n == 1)
        {
            return strs[0];
        }
        string result = "";
        int j = 0;
        int flag = 0;
        int m = strs[0].length();
        while (j < m)
        {
            char ch = strs[0][j];
            int i;
            for (i = 1; i < n; i++)
            {
                if ((j > strs[i].length() - 1) || (strs[i][j] != ch))
                {
                    return result;
                }
            }
            if (i == n)
            {
                result += ch;
            }
            j++;
        }
        return result;
    }
};

/*
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int vec_len=strs.size();
        if(vec_len==0)
            return "";
        int str_len=strs[0].size();
        for(int i=0;i<str_len;i++)
            for(int j=1;j<vec_len;j++)
                if(strs[j][i]!=strs[0][i])
                    return strs[0].substr(0,i);
        return strs[0];
    }
};

int main()
{
    Solution solu;
    //vector<string>vec = { "flower", "flow", "flight" };
    vector<string>vec = { "dog", "racecar", "car" };
    string str = solu.longestCommonPrefix(vec);
    cout << str << endl;
    return 0;
}
**/
