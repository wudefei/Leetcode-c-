#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    bool isPalindrome(int x) {
        if (x >= 0 && x<10)
        {
            return true;
        }
        if (x < 0 || x % 10 == 0)
        {
            return false;
        }
        vector<int>vec;
        int n = x;
        while (n != 0)
        {
            vec.push_back(n%10);
            n /= 10;
        }
        int size = vec.size();
        int i, j;
        for (i = 0, j = size -1; i<=j; i++, j--)
        {
            if (vec[i] != vec[j])
            {
                return false;
            }
        }

        return true;
    }
};
