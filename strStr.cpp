#include <iostream>
using namespace std;
#include <string>

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack == "" && needle == "")
        {
            return 0;
        }
        if (haystack == "")
        {
            return -1;
        }
        if (needle == "")
        {
            return 0;
        }
        int lenhay = haystack.length();
        int lenneedle = needle.length();

        for (int i = 0; i < lenhay-lenneedle+1; i++)
        {
            string str = haystack.substr(i,lenneedle);
            if (str == needle)
            {
                return i;
            }
        }
        return -1;
    }
};

/**
class Solution {
public:
    int strStr(string haystack, string needle) {
        int iPos = 0;
        if(needle.empty())
            return iPos;
        iPos = haystack.find(needle);
        if(iPos > haystack.size())
            return -1;
        else
            return iPos;
    }
};

int main()
{
    Solution solu;
    string s1 = "aaaaa";
    string s2 = "baa";
    int result = solu.strStr(s1,s2);
    cout << result << endl;
    return 0;
}
*/