// 1
// 1
// 2
// 1 2
// 2
// 2 1
// 3
// 1 2 3
// 3
// 1 3 2
// 3
// 2 1 3
// 3
// 2 3 1
// 3
// 3 1 2
// 3
// 3 2 1
// 4
// 1 2 3 4
// 4
// 1 2 4 3
// 4
// 1 3 2 4
// 4
// 1 3 4 2
// 4
// 1 4 2 3
// 4
// 1 4 3 2
// 4
// 2 1 3 4
// 4
// 2 1 4 3
// 4
// 2 3 1 4
// 4
// 2 3 4 1
// 4
// 2 4 1 3
// 4
// 2 4 3 1
// 4
// 3 1 2 4
// 4
// 3 1 4 2
// 4
// 3 2 1 4
// 4
// 3 2 4 1
// 4
// 3 4 1 2
// 4
// 3 4 2 1
// 4
// 4 1 2 3
// 4
// 4 1 3 2
// 4
// 4 2 1 3
// 4
// 4 2 3 1
// 4
// 4 3 1 2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<long long, long long>>
#define vint vector<int>
#define all(a) a.begin(), a.end()
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
long long getNo(vi &a)
{
    ll no = 0;
    for (int i = 0; i < 64; i++)
    {
        no += (1LL << i) * a[i]; // Using bit manipulation to set the ith bit
    }
    return no;
}
void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    int mn = n + 1, mnWin = n + 1;
    while (n--)
    {
        int x;
        cin >> x;
        if (mn < x && x < mnWin)
        {
            ans += 1;
            mnWin = x;
        }
        mn = min(mn, x);
    }
    cout << ans << endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}