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
    int n;
    cin >> n;
    vi a(n);
    inputi(0, n, a);
    sort(a.begin(), a.end());
    if(a[0]==a[n-1]){
        YES;
        return;
    }
    map<int, int> m;
    for (int i = 0; i < n;i++){
        if(a[i]<=2){
            m[a[i]]++;
        }
    }
    if(m[1]==0){
        YES;
        return;
    }
    if (m[1] > 0 && m[0] > 0 || m[1] > 0 && m[2] > 0)
    {
        NO;
        return;
    }
    for (int i = 1; i <n;i++){
         if(a[i]-a[i-1]==1){
            NO;
            return;
         }
    }

        YES;
    return;
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
// 20
// 20 16 3 13 9 19 3 17 5 12 13 6 0 4 20 5 11 17 9 9
}