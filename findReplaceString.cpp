#include <iostream>
using namespace std;
#include <vector>
#include <string>

class Solution {
public:
    string findReplaceString(string S, vector<int>& indexes, vector<string>& sources, vector<string>& targets) {
        int S_len = S.length();
        int indexessize = indexes.size();
        int sourcessize = sources.size();
        int targetsize = targets.size();
        if (S_len <= 0 || S_len > 1000 
            || indexessize <= 0 || indexessize > 100
            || sourcessize <= 0 || sourcessize > 100
            || targetsize <= 0 || targetsize > 100)
        {
            return NULL;
        }
        if (indexessize != sourcessize || indexessize != targetsize)
        {
            return NULL;
        }
        string resultstr = "";
        int flag = 0;
        int i, j;
        for (i = 0; i < S_len; )
        {
            for (j = 0; j < indexessize; j++)
            {
                if (i == indexes[j])
                {
                    if (sources[j] == S.substr(i,sources[j].length()))
                    {
                        resultstr += targets[j];
                    }
                    else
                    {
                        resultstr += S.substr(i,sources[j].length());
                    }
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                resultstr += S[i];
                i++;
            }
            else
            {
                flag = 0;
                i += sources[j].length();
            }
        }
        return resultstr;
    }
};

/*
int main()
{
    string S = "wqzzcbnwxc";
    vector<int>indexes = { 5, 2, 7 };
    vector<string>sources = { "bn", "zzc", "wxc" };
    //vector<string>sources = { "a", "cd" };
    vector<string>targets = { "t", "lwb", "nee" };
    Solution solu;
    string newS = solu.findReplaceString(S, indexes, sources, targets);
    cout << newS << endl;
    if (newS.compare("wqlwbtnee") == 0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "not" << endl;
    }
    return 0;
}

*/