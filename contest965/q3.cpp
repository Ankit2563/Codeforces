#include <bits/stdc++.h>
using namespace std;

int calculateMedian(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    return arr[(n - 1) / 2];
}

int calculateScore(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int max_score = INT_MIN;
    vector<int> ci;

    for (int i = 0; i < n; ++i)
    {
        if (b[i] == 1)
            a[i] += 1;
        ci.push_back(a[i]);
        int current_median = calculateMedian(ci);
        max_score = max(max_score, a[i] + current_median);
    }

    return max_score;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];

        // Perform the operations here and calculate the score.
        cout << calculateScore(a, b) << endl;
    }

    return 0;
}
