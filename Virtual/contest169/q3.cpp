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
    int n, k;
    cin >> n >> k;
    vi a(n);
    inputi(0, n, a);
   
    sort(all(a),greater<int>());
    ll ans = 0;
    for (int i = 1; i < n;i=i+2){
        if(i%2==1){
           
           if(k>0){
            int x = min(a[i - 1] - a[i],max(k,0));
            a[i] += x;
            k -= x;
            ans += (a[i - 1] - a[i]);
            }
            else{
                ans += (a[i - 1] - a[i]);
            }
            
        }
    }
    if(n%2==1)
        ans += a[n - 1];

    cout << ans << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
}