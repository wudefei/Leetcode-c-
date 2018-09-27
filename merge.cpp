#include<iostream>
using namespace std;
#include <vector>
/**
给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，使得 num1 成为一个有序数组。
说明:
初始化 nums1 和 nums2 的元素数量分别为 m 和 n。
你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
输入:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6],       n = 3
输出: [1,2,2,3,5,6]
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