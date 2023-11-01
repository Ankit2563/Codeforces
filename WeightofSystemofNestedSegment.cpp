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

void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, int> indexmp;
    vector<pair<int, int>> v;
    for (int i = 0; i < m; i++)
    {
        int pointNo, wt;
        cin >> pointNo >> wt;
        v.push_back({wt, pointNo});
        indexmp[pointNo] = i + 1;
    }
    sort(v.begin(), v.end());
    vi indexv;
    ll sum = 0;
    for (int i = 0; i < 2 * n;i++){
        sum += v[i].first;
        indexv.push_back(v[i].second);
    }
    cout << sum << endl;
    sort(indexv.begin(), indexv.end());
    for (int i = 0; i < n;i++){
        cout << indexmp[indexv[i]] << " " << indexmp[indexv[2*n-i-1]]<< endl;
    }
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