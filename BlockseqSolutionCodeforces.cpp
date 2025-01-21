#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> dp(n, n + 1);
    dp[n - 1] = 1;

    auto get = [&](int pos)
    {
        if (pos >= n)
            return n + 1;
        if (pos == n)
            return 0;
        return dp[pos];
    };

    for (int i = n - 2; i >= 0; i--)
    {
        dp[i] = min(dp[i + 1] + 1, get(i + a[i] + 1));
    }

    cout << dp[0] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
 