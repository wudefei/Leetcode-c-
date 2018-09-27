#include <iostream>
using namespace std;
#include <vector>
#include <string>
/*
���������������ַ������������ǵĺͣ��ö����Ʊ�ʾ����
����Ϊ�ǿ��ַ�����ֻ�������� 1 �� 0��
����: a = "11", b = "1"
���: "100"
*/
class Solution {
public:
    string addBinary(string a, string b) {
        if (a == "" || a == "0")
        {
            return b;
        }
        if (b == "" || b == "0")
        {
            return a;
        }
        int lena = a.length() - 1;
        int lenb = b.length() - 1;
        string result = "";
        int flag = 0;
        int temp = 0;
        while (lena >= 0 || lenb >= 0)
        {
            temp = flag;
            if (lena >= 0)
            {
                temp += a[lena] - '0';
                lena--;
            }
            if (lenb >= 0)
            {
                temp += b[lenb] - '0';
                lenb--;
            }
            if (temp >= 2)
            {
                flag = 1;
                temp -= 2;
            }
            else
            {
                flag = 0;
            }
            result = to_string(temp) + result;
        }
        if (flag != 0)
        {
            result = "1" + result;
        }
        return result;
    }
};
/*
int main()
{
    Solution *solu = new Solution;
    string a = "1111";
    string b = "1111";
    string result = solu->addBinary(a, b);
    cout << result << endl;
    return 0;
}
*/
