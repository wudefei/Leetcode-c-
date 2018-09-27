#include<iostream>
using namespace std;
#include <vector>
/**
�������������������� nums1 �� nums2���� nums2 �ϲ��� nums1 �У�ʹ�� num1 ��Ϊһ���������顣
˵��:
��ʼ�� nums1 �� nums2 ��Ԫ�������ֱ�Ϊ m �� n��
����Լ��� nums1 ���㹻�Ŀռ䣨�ռ��С���ڻ���� m + n�������� nums2 �е�Ԫ�ء�
����:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3
���: [1,2,2,3,5,6]
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (m < 0 || n < 0)
        {
            return;
        }
        int k = m + n - 1;
        int i = m-1, j = n-1;
        while (i>=0 && j>=0 && k>=0)
        {
            if (nums1[i] >= nums2[j])
            {
                nums1[k] = nums1[i];
                i--;
            }
            else
            {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
        while (j >= 0 && k >=0)
        {
            nums1[k--] = nums2[j--];
        }
        return;
    }
};
/*
int main()
{
    //vector<int>nums1 = { 1, 2, 3, 0, 0, 0 };
    //int m = 3;
    //vector<int>nums2 = { 2, 5, 6 };
    //int n = 3;
    vector<int>nums1 = {0};
    int m = 0;
    vector<int>nums2 = {1};
    int n = 1;
    Solution solu;
    solu.merge(nums1,m,nums2,n);
    for (int i = 0; i < m+n; i++)
    {
        cout << nums1[i] << " ";
    }
    return 0;
}
    */