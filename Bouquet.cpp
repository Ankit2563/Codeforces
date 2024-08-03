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

void input(int i, int n, vector<long long> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}

void solve()
{
    ll n, k1;
    ll ans1 = 0, res = 0,ans=0;
    cin >> n >> k1;
    vector<ll> a(n);
    vector<ll> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    vector<pair<int, int>> v;
    for (int i = 0; i < n;i++){
        v.push_back({a[i], c[i]});
    }
    sort(v.begin(), v.end());

    ll cur = 0;
    int left = 0;


    for (int i = 0; i< n; i++)
    {
        int k = k1;
        ll e1 = v[i].first, e2 = v[i + 1].first;
        ll f1 = v[i].second, f2 = v[i + 1].second;
        if(e2-e1>1){
           if(f1>(k/(e1))){
               ans = max(ans, (k / e1) * e1);
           }
           else{
               ans = max(ans, (f1 / e1) * e1);
           }
        }
        else{
            long long div2 = k / e2;
            if(f2<div2){
                  long long div1=(k-f2*)
            }
        }

            
    }

    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
