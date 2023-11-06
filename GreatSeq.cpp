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
void inputvv(int k, int p, int n, int m, vector<vector<int>> &v)
{
    for (int i = k; i < n; i++)
    {
        for (int j = p; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
}
void inputvvc(int k, int p, int n, int m, vector<vector<char>> &v)
{
    for (int i = k; i < n; i++)
    {
        for (int j = p; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
}

void solve()

{
    int n, x;
    cin >> n >> x;
    vi a(n);
    inputi(0, n, a);

    ll ans = 0;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    for (auto &it : mp)
    {
        ll req = it.first * (ll)x;
      
            if (mp[req] > 0&&req<=1000000000)
            {

                if (it.second > mp[req])
                {
                    ans += (it.second - mp[req]);
                    it.second = 0;
                    mp[req] = 0;
                }
                else
                {

                    mp[req] = mp[req] - it.second;
                }
            }
            else
            {
                ans += it.second;
            }
       
    }
    cout << ans << endl;
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
}