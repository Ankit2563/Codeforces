#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
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
    long long ans=1;
    ll p = (n - 1) * n;
    for(int i = 1; i <=n;i++){
        ans = (ans * 1LL * i) % 1000000007;
    }
    ans = ans % 1000000007;
    cout << (ans * 1LL * (((n - 1) * 1LL * 1LL*n) % 1000000007)) % 1000000007 << endl;
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