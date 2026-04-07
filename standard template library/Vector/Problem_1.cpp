#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // reverse a array
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    cout << "\n";

    for (int x : v)
    {
        cout << x << " ";
    }

    cout << "\n";

    // min max value findout
    int maxVal = v[0];
    int mainVal = v[0];

    // even count
    // summation
    // new vector

    int evenCnt = 0;
    int sum = 0;
    vector<int> newEven;
    for (int x : v)
    {

        sum += x;

        if (x % 2 == 0)
        {
            evenCnt++;
            newEven.push_back(x);
        }

        if (x > maxVal)
        {
            maxVal = x;
        }
        else if (x < mainVal)
        {
            mainVal = x;
        }
    }

    cout << maxVal << " : max value  " << "\n";
    cout << mainVal << " : min value  " << "\n";

    cout << "number of even elements : " << evenCnt << "\n";
    cout << "sum of all the elements : " << sum << "\n";
    cout << "new vector : " << "\n";

    for (int x : newEven)
    {
        cout << x << " ";
    }
    cout << "\n";

    cout << "Complete all 5 problem ";
}