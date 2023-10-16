// 1 1
// 1
// 1 1
// 2
// 1 1
// 3
// 1 1
// 4
// 1 2
// 1
// 1 2
// 2
// 1 2
// 3
// 1 2
// 4
// 1 3
// 1
// 1 3
// 2
// 1 3
// 3
// 1 3
// 4
// 1 4
// 1
// 1 4
// 2
// 1 4
// 3
// 1 4
// 4
// 1 5
// 1
// 1 5
// 2
// 1 5
// 3
// 1 5
// 4
// 1 6
// 1
// 1 6
// 2
// 1 6
// 3
// 1 6
// 4
// 1 7
// 1
// 1 7
// 2
// 1 7
// 3
// 1 7
// 4
// 2 1
// 1 1
// 2 1
// 1 2
// 2 1
// 1 3
// 2 1
// 1 4
// 2 1
// 2 1
// 2 1
// 2 2
// 2 1
// 2 3
// 2 1
// 2 4
// 2 1
// 3 1
// 2 1
// 3 2
// 2 1
// 3 3
// 2 1
// 3 4
// 2 1
// 4 1
// 2 1
// 4 2
// 2 1
// 4 3
// 2 1
// 4 4
// 2 2
// 1 1
// 2 2
// 1 2
// 2 2
// 1 3
// 2 2
// 1 4
// 2 2
// 2 1
// 2 2
// 2 21
// 2 2
// 2 3
// 2 2
// 2 4
// 2 2
// 3 1
// 2 2
// 3 2
// 2 2
// 3 3
// 2 2
// 3 4

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
    int n;
    long long x;
    cin >> n >> x;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long lo = 0, hi = 2000000007;
    while (lo < hi)
    {
        long long mid = lo + (hi - lo + 1) / 2;
        long long tot = 0;
        for (int i = 0; i < n; i++)
        {
            tot += max(mid - a[i], 0LL);
        }
        if (tot <= x)
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    cout << lo << endl;
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
