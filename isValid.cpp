#include<iostream>
using namespace std;
#include <stack>
/**
����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ������ж��ַ����Ƿ���Ч��
��Ч�ַ��������㣺
�����ű�������ͬ���͵������űպϡ�
�����ű�������ȷ��˳��պϡ�
ע����ַ����ɱ���Ϊ����Ч�ַ�����
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