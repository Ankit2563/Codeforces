#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define vpi vector<pair<long long,long long>>
#define vint vector<int>
#define all(v) v.begin(), v.end()
#define MOD 1000000007
#define MOD2 998244353
#define MX 1000000000
#define MXL 1000000000000000000
#define PI (ld)2*acos(0.0)
#define pb push_back
#define sc second
#define fr first
#define endl '\n'
#define ld long double
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl


void input(int i,int n,vector<long long>&a){
    for (int k = i; k <n;k++){
        cin >> a[k];
    }
    return;
} 
void inputvv(int i,int m,int n,vector<vector<long long>>&v){
    for (int k = i; k < n;k++){
        for (int j = 0; j < m;j++){
            cin >> v[k][j];
        }
    }
}

 
void solve(){
    ll k, x, b, y, a = 0, n;
    string s;
    ll ans = 0;
    cin >> n;
    vector<ll> v(n + 1);
    vector<ll> pre(n + 1);

    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
        pre[i] += pre[i - 1] + v[i];
    }

    cin >> k;
    while (k--)
    {
        cin >> x >> y;
        if (pre[n] - pre[x - 1] <= y)
        {
            cout << n << " ";
            continue;
        }
        if (v[x] >= y)
        {
            cout << x << " ";
            continue;
        }

        ll idx = upper_bound(pre.begin() + x, pre.end(), y + pre[x - 1]) - pre.begin() - 1;

        if (y - (pre[idx] - pre[x - 1]) >= (v[idx + 1] + 1) / 2)
            idx++;
        //  cout<<  <<" ";

        cout << idx << " ";
    }

    cout << endl;
}



 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

