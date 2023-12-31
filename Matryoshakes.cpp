#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
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
void input(int i, int n, vector<int> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    input(0, n, a);
    map<int, int> m;
    for (int i = 0; i < n;i++){
        m[a[i]]++;
    }
    int c, d;
    int ans = 0;

    for (auto i = m.begin(); i != m.end(); i++)
    {

        if (i == m.begin())
        {
            c = i->first;
            d = i->second;
            ans += d;
            continue;
        }
        if (i->first - c == 1)
        {
            ans += max(0, i->second - d);
            d = i->second;
            c = i->first;
        }
        else
        {
            ans += i->second;
            c = i->first;
            d = i->second;
        }
    }
    cout << ans << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
}