#include <bits/stdc++.h>
using namespace std;

// Descending Order
bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    // Phase-3 ( STL Algorithms with Vector )

    vector<int> v = {5, 2, 8, 8, 8, 1, 9, 3};

    // ***1) sort() and reverse()
    sort(v.begin(), v.end(), cmp);
    sort(v.begin(), v.end(), greater<int>()); // descending order

    reverse(v.begin(), v.end());

    // COMPARATOR ( COMPARE WHICH VALUE CAME FIRST)

    //***2) find() and count()

    // find — returns iterator to first match, or v.end() if not found
    auto it = find(v.begin(), v.end(), 9);

    if (it != v.end())
    {
        cout << *it << "\n";              // value
        cout << (it - v.begin()) << "\n"; // index
    }
    else
    {
        cout << *it << "\n";
    }

    // count — counts all occurrences
    int cnt = count(v.begin(), v.end(), 9);
    cout << cnt << "\n";

    //***3) lower_bound() and upper_bound()

    /*
    v =  { 1,  3,  3,  5,  7,  9 }
    idx:   0   1   2   3   4   5

    lower_bound(3) → index 1  (first 3)
    upper_bound(3) → index 3  (after last 3)
    */

    auto lower_bound_v = lower_bound(v.begin(), v.end(), 8);
    auto upper_bound_v = upper_bound(v.begin(), v.end(), 8);

    int lower_bound_v_idx = lower_bound_v - v.begin();
    int upper_bound_v_idx = upper_bound_v - v.begin();

    cout << "lower bound index : " << lower_bound_v_idx << "\n";
    cout << "upper bound index : " << upper_bound_v_idx << "\n";

    // in sorted array it better to count using lb and ub (O(nlog(n)))

    int count_of_8 = upper_bound_v_idx - lower_bound_v_idx;
    cout << "Frequency of 8 : " << count_of_8 << "\n";

    // ***4) accumulate
    /*
    accumulate adds up all the elements in a vector (or container).

    accumulate(start_iterator, end_iterator, initial_value)
    */

    int sum = accumulate(v.begin(), v.end(), 1);
    cout << "sum of all value : " << sum << "\n";

    //***5) unique() + erase() Idiom
    /*
    This is a classic two-step pattern to remove duplicates.

    step 1: unique() moves duplicates to the end, returns iterator to new end (where the garbage value start)
    step 2: erase the garbage

    vector<int> v = {1, 1, 2, 3, 3, 3, 4};
    v is now: {1, 2, 3, 4, ?, ?, ?}  ← ? are garbage values
    v is now: {1, 2, 3, 4}
    */

    auto newEnd = unique(v.begin(), v.end());
    v.erase(newEnd, v.end());

    for (int x : v)
    {
        cout << x << " ";
    }
}