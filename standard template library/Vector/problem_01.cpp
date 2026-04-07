#include <bits/stdc++.h>
using namespace std;

void rotateRight(vector<int> &num, int k)
{
    vector<int> Result;

    int n = num.size();
    // twist
    k = (k & n);

    for (int i = n - k; i < n; i++)
    {
        Result.push_back(num[i]);
    }
    for (int i = 0; i < (n - k); i++)
    {
        Result.push_back(num[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << Result[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Enter k: ";
    cin >> k;

    rotateRight(nums, k);

    return 0;
}
// Rotate Array By K step
/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Link:https://leetcode.com/problems/rotate-array/description/

*/