// 2 1
// 0 1
// 1 1
// 0
// 2 1
// 0 0
// 7 8
// 1 1 1 1 0 0 0
// 6 3
// 1 1 1 1 1 0
// 1 1
// 1
// 1 1
// 1
// 4 2
// 1 1 0 0
// 5 1
// 0 0 0 1 0
// 4 1
// 0 1 0 0
// 5 1
// 0 1 0 1 1
// 7 4
// 1 1 1 1 0 0 1
// 4 3
// 1 1 1 0
// 1 1
// 0
// 7 2
// 0 0 0 0 1 1 1
// 10 4
// 1 0 1 0 0 1 1 1 0 0
// 7 4
// 0 1 0 1 1 1 0
// 7 8
// 0 1 0 1 1 0 0
// 5 2
// 1 1 0 0 1
// 1 1
// 0
// 4 2
// 0 1 0 1
// 2 1
// 1 1
// 7 2
// 1 0 0 0 1 0 1
// 2 1
// 0 0
// 9 3
// 1 1 0 0 0 0 1 0 0
// 5 2
// 0 1 0 0 1
// 9 5
// 1 0 0 1 0 0 1 1 1
// 3 1
// 0 1 0
// 8 1
// 0 1 0 1 0 1 1 0
// 8 1
// 0 0 0 0 0 0 1 0
// 10 5
// 1 0 1 1 0 1 1 0 0 1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<long long, long long>>
#define vint vector<int>
#define all(v) v.begin(), v.end()
#define MOD 1000000007
#define MOD2 998244353
#define MX 1000000000
#define MXL 1000000000000000000
#define PI (ld)2 * acos(0.0)
#define pb push_back
#define sc second
#define fr first
#define endl '\n'
#define ld long double
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
void inputl(int i, int n, vector<long long> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}
void inputi(int i, int n, vector<int> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}

const int MAX = 200'007;

void solve()
{

    int n, s;
    cin >> n >> s;

    vi a(n);
    inputi(0, n, a);

    int i = 0, j = 0;
    int ans = -1, at = 0;
    while (i < n)
    {
        while (j < n && at + a[j] <= s)
        {
            at += a[j];
            ++j;
        }

        if (at == s)
        {
            ans = max(ans, j - i);
        }

        at -= a[i];
        ++i;
    }

    if (ans == -1)
    {
        cout << -1 << endl;
        return;
    }

    cout << n - ans << endl;
   
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve();
    }
    // solve();
}
