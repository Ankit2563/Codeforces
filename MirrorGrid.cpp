#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vv vector<vector<int>>
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

void solve()
{

    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> a[i][j];
        }
    }
    ll ans = 0;
    for (int i = 0; i < (n / 2); i++)
    {
        for (int j = i; j < n - i - 1; j++)
        {
            map<char, int> m;
             m[a[i][j]]++;
             m[a[j][n - i - 1]]++;
             m[a[n - i - 1][n - j - 1]]++;
             m[a[n - j - 1][i]]++;
             ans += min(m['0'], m['1']);
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