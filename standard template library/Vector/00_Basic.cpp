#include <bits/stdc++.h>
using namespace std;
int main()
{

    /*
    A vector is a dynamic array — it can grow and shrink at runtime, unlike regular arrays where size is fixed at compile time. Internally, it stores elements in contiguous memory (just like an array), which makes element access O(1).
    */

    // ***1) Declaration & Initialization
    vector<int> v;              // declare a vector
    vector<int> v1 = {1, 2, 3}; // inialize a vector
    vector<int> v3(10);         // size is 10 and all elements is zero
    vector<int> v4(10, 5);      // size is 10 and all elements is 5
    vector<int> v5(v4);         // copy one vector to another

    // ***2) push_back & pop_back
    v.push_back(10); // v={10}
    v.push_back(20); // v={10,20}
    v.push_back(30); // v={10,20,30}

    v.pop_back();

    // push_back ---> add elements at last position (amortized O(1))
    // pop_back ---> remove elements at last position (O(1))

    // ***3) Accessing Elements
    cout << v[0];      // no bount check , throw error
    cout << v.at(0);   // check bound and then execute
    cout << v.front(); // first elements
    cout << v.back();  // last elements

    /*
      Interview tip: v[i] does no bounds checking — accessing out of range is undefined behavior. v.at(i) is safer but slightly slower.
     */

    // ***4) size(), empty(), clear()

    cout << v.size();  // 2
    cout << v.empty(); // (0) false
    // cout << v.clear(); -->  removes all elements → {}

    // ***5) Iterating Over a Vector

    // classic
    for (int i; i < (v.size()); i++)
    {
        cout << v[i];
    }

    // range base (modern c++)
    for (int x : v)
    {
        cout << x << "\n";
    }

    // range and Reference base, good for modification
    for (int &x : v)
    {
        cout << x * 2 << "\n";
    }
}