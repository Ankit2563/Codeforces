#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
#include <algorithm>
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
    ll n, q;
    cin >> n >> q;
    vl a(n);
    inputl(0, n, a);
    vl temp(q);
    inputl(0, q, temp);
    map<ll, int> m;
    for (int i = q-1; i >=0;i--){
        
        m[temp[i]]=i;
    }
    vector<pair<ll, ll>> b;
    for(auto it:m){
        b.push_back({it.second, it.first});

    }
    sort(b.begin(), b.end());

    for (int i = 0; i < a.size(); i++)
    {
        for (auto &it : b)
        {
            if (a[i] % ((int)pow(2, it.second)) == 0)
            {
                a[i] = a[i] + ((int)pow(2,it.second - 1) );
            }
        }
        }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    // solve();
}