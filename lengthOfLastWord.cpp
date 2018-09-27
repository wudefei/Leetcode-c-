#include <iostream>
using namespace std;
#include <vector>
/*
给定一个仅包含大小写字母和空格 ' ' 的字符串，返回其最后一个单词的长度。
如果不存在最后一个单词，请返回 0 。
说明：一个单词是指由字母组成，但不包含任何空格的字符串。
输入: "Hello World"
输出: 5
*/
/*
class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s == "" || s == " ")
        {
            return 0;
        }
        vector<string>vect;
        int len = s.length();
        int index1 = 0, index2 = 0;
        while (index1 < len && index2 < len)
        {
            while (isspace(s[index1]) != 0 && index1 < len)
            {
                index1++;
            }
            index2 = index1;
            while (isspace(s[index2]) == 0 && index2 < len)
            {
                index2++;
            }
            if (index2 > index1)
            {
                string temp_s = s.substr(index1, index2 - index1);
                vect.push_back(temp_s);
            }
            index1 = index2;
        }
        int n = vect.size();
        if (n == 0)
        {
            return 0;
        }
        return vect[n-1].length();
    }
};
*/
/**/
class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s == "" || s == " ")
        {
            return 0;
        }
        int len = s.length();
        int index1 = len - 1, index2 = len - 1;
        while (index2 >= 0 && s[index2] == ' ')
        {
            index2--;
        }
        index1 = index2;
        while (index1 >= 0 && s[index1] != ' ')
        {
            index1--;
        }
        return index2 - index1;
    }
};
/*
int main()
{
    Solution solu;
    string s = "a";
    int n = solu.lengthOfLastWord(s);
    cout << n << endl;
    return 0;
}
*/


