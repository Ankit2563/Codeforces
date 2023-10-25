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
void funct1(vi &a, int k, int maxi)
{

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % k == 0)
        {
            maxi = 0;
            break;
        }
        else
        {
            if (maxi > k - a[i] % k)
            {
                maxi = k - a[i] % k;
            }
        }
    }
    cout << maxi << endl;
}
void funct2(vi &a, int k, int maxi)
{

    int ans = 2;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % 4 == 0)
        {
            maxi = 0;
            break;
        }
        else
        {
            if (maxi > k - a[i] % k)
            {
                maxi = k - a[i] % k;
            }
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % 2 == 0)
        {
            ans = max(ans - 1, 0);
        }
    }
    cout << min(ans, maxi) << endl;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    int f = 0;
    inputi(0, n, a);
    int maxi = k;
    if (k == 2 || k == 3 || k == 5)
    {
        funct1(a, k, maxi);
    }
    else
    {
        funct2(a, k, maxi);
    }
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