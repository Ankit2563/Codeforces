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
    int x, y, n;
    cin >> x >> y >> n;

    vi ans(n);
    ans[0] = x, ans[n - 1] = y;
    int cnt = 1;
    for (int i = n-2; i >0;i--){
         ans[i] = ans[i + 1] - cnt;
        cnt++;
    }
    if(ans[1]-ans[0]<=ans[2]-ans[1]){
        cout << -1 << endl;
    }
    else{

        for (int i = 0; i < n;i++){
            cout << ans[i] << " ";
        }
        cout << endl;
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