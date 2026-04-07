#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> x)
{
    int n = x.size();
    cout << "\nPrint vector from the function\n";
    for (int i = 0; i < n; i++)
    {
        x[i] += 1;
        cout << x[i] << " ";
    }
}

void DoubleAll(vector<int> &x)
{
    int n = x.size();
    cout << "\nPrint vector from the function\n";
    for (int i = 0; i < n; i++)
    {
        x[i] *= 2;
        cout << x[i] << " ";
    }
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // *** 1)insert and erase

    // insert position  (v.insert(position,value))
    v.insert(v.begin() + 2, 99);

    // erase(position)
    v.erase(v.begin() + 1);

    // erase A range
    v.erase(v.begin() + 2, v.begin() + 3);

    /*
    Both are O(n) because all elements after the position must shift. Never use these inside a loop blindly — it's a common performance mistake interviewers look for.
    */

    // *** 2)Iterators — begin() and end()

    // v.end()--> (last elements + 1) --> garbage value

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    // ***3) resize() vs reserve()

    v.reserve(10); // allocates memory for 10 elements
                   // size stays 0, capacity becomes 10
                   // NO new elements are created

    cout << v.size() << " ";
    cout << v.capacity() << " ";
    // not accessable v[2]  because elements are not created

    v.resize(10); // size becomes 10
                  // fills new slots with 0
                  // elements are actually accessible now

    cout << v.size() << " ";
    cout << v.capacity() << " ";
    cout << v[2] << " ";

    cout << "\n";

    // ***4) 2D Vectors

    // declare a 2d vector with 3 row and 4 columns
    // vector<vector<int>>name(row,vector<int>(columns))
    vector<vector<int>> grid(3, vector<int>(4, 0));

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }

    // ***5) Passing Vectors to Functions

    /*
    copy the whole array then change or modification in the array
    This type is called “pass by value” → it sends a copy of the whole array/vector.

    using const keyword.it make little bit faster
    by const reference — read-only, no copy

    //  by value — makes a full copy, expensive and changes won't reflect
    void printVec(vector<int> v) { ... }

    //  by const reference — read-only, no copy
    void printVec(const vector<int>& v) { ... }

    //  by reference — can modify the original
    void doubleAll(vector<int>& v) {
    for (int& x : v) x *= 2;
}
    */

    vector<int> v_1 = {1, 2, 3, 4, 5};
    vector<int> v_2 = {12, 22, 32, 42, 52};

    cout << "\nthe original vector \n";
    for (int x : v_1)
    {
        cout << x << " ";
    }
    // call the function by pass by value
    printVec(v_1);

    cout << "\nthe original vector \n";
    for (int x : v_1)
    {
        cout << x << " ";
    }

    cout << "\n--------------------------------\n";

    cout << "\nthe original vector \n";
    for (int x : v_2)
    {
        cout << x << " ";
    }
    // call the function by reference
    DoubleAll(v_2);

    cout << "\nthe original vector \n";
    for (int x : v_2)
    {
        cout << x << " ";
    }
}