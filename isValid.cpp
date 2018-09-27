#include<iostream>
using namespace std;
#include <stack>
/**
给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
有效字符串需满足：
左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
注意空字符串可被认为是有效字符串。
*/
class Solution {
public:
    bool isValid(string s) {
        if (s == "")
        {
            return true;
        }
        stack<char> mystack;
        int len = s.length();
        for (int i = 0; i < len; i++)
        {
            if (mystack.empty())
            {
                mystack.push(s[i]);
            }
            else
            {
                if (s[i] == '{' || s[i] == '[' || s[i]== '(')
                {
                    mystack.push(s[i]);
                }
                else if (s[i] == ')')
                {
                    if (mystack.top() == '(')
                    {
                        mystack.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else if (s[i] == ']' )
                {
                    if (mystack.top() == '[')
                    {
                        mystack.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else if (s[i] == '}')
                {
                    if (mystack.top() == '{')
                    {
                        mystack.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        if (mystack.empty() == false)
        {
            return false;
        }
        return true;
    }
};
/**
int main()
{
    string s = "";
    Solution solu;
    bool result = solu.isValid(s);
    if (result == true)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    
    return 0;
}
*/