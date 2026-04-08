#include <bits/stdc++.h>
using namespace std;

void CodeSection(vector<int> &num, int l, int u)
{
    num.insert(num.begin(), l);
    num.push_back(u);

    int n = num.size();
    vector<vector<int>> Result;
    for (int i = 1; i < n; i++)
    {
        if (abs(num[i] - num[i - 1]) > 1)
        {
            Result.push_back({num[i - 1] + 1, num[i] - 1});
        }
    }

    for (int i = 0; i < Result.size(); i++)
    {
        cout << "[" << Result[i][0] << ", " << Result[i][1] << "]\n";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int l, u;
    cin >> l >> u;

    CodeSection(nums, l, u);

    return 0;
}
// Title : Missing Ranges
/*
Description : Given a sorted integer array nums, and two integers lower and upper, the task is to find and return the missing ranges in the range [lower, upper] that are not covered by the elements in the array. The output should be a 2D vector, where each row represents a missing range and contains two integers start and end.

Input:nums = [0, 1, 3, 50, 75], lower = 0 and upper = 99,
Output:[[2,2], [4-,49], [51,74], [76,99]]
Explanation:

Link:

*/