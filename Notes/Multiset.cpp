#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Initialise the multiset
    multiset<int,greater<int>> multi_set;
    multiset<int>::iterator ms_iterator;

    // Add values to the multiset
    for (int i = 1; i < 10; i++)
    {
        multi_set.insert(i);
    }
    multi_set.insert(1);

    cout << "Original multiset: ";

    for (ms_iterator = multi_set.begin();
         ms_iterator != multi_set.end();
         ++ms_iterator)

        cout
            << ' ' << *ms_iterator;
    cout << '\n';

    ms_iterator = multi_set.begin();
    ms_iterator++;

    // Passing the iterator for the position
    // at which the value is to be erased
    multi_set.erase(ms_iterator);

    cout << "Modified multiset: ";

    for (ms_iterator = multi_set.begin();
         ms_iterator != multi_set.end();
         ++ms_iterator)

        cout << ' ' << *ms_iterator;
    cout << '\n';

    return 0;
}