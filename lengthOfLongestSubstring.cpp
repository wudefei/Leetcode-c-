#include <iostream>
using namespace std;
#include <string>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.length();
        if (length <= 1)
        {
            return length;
        }
        int maxlen = 0;
        int i, j;
        int index = 0;
        bool flag = 0;//���ظ�flagֵΪ1������Ϊ0
        for (i = 0; i < length; i++)
        {
            j = i;
            while (j < length && flag)
            {

            }
        }

        return maxlen;
    }
};