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
    int n, m;
    cin >> n >> m;
    vector<vector<char>> a(n, vector<char>(m));
    inputvvc(0, 0, n, m, a);

    for (int j = 0; j < m; j++)
    {
        int idx = n;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i][j] == '*')
            {
                if (idx == -1)
                {
                    idx--;
                    if (i == 0)
                    {
                        idx = 0;
                    }
                    else
                    {
                        a[idx][j] = '*';
                        a[i][j] = '.';
                    }
                }
                else
                {
                    if (abs(idx - i) != 1)
                    {
                        idx--;
                        if (idx >= 0)
                        {
                            a[idx][j] = '*';
                            a[i][j] = '.';
                        }
                    }
                    else
                    {
                        idx--;
                        
                        a[idx][j] = '*';
                    }
                }
            }
            else if (a[i][j] == 'o')
            {
                idx = i;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
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