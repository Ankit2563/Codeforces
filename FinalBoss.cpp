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
    int h, n;
    cin >> h >> n;
    vi a(n);
    vi c(n);
    inputi(0, n, a);
    inputi(0, n, c);
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        mp[c[i]] = mp[c[i]] + a[i];
    }
    vector<int> a1;

    vector<int> c1;

    for(auto it:mp){
        a1.push_back(it.second);
        c1.push_back(it.first);
    }
    ll sum2 = accumulate(a1.begin(), a1.end(), 0LL);
    if(h<=sum2){
        cout << 1 << endl;
        return;
    }
    int m = a1.size();
    if(m==1){
        int n1;
        if(h%a1[0]==0){
            n1 = h / a1[0];

        
        }
        else{
            n1 = h / a1[0] + 1;
        }
        ll ans2 = 0;
        ans2 = 1;
        for (int i = 1; i < n1;i++)
        {
            ans2 += c1[0];
        }
        cout << ans2 << endl;
        return;
    }
   
    ll left = 1, right = 1e18,mid=0;
    ll mini = 1e18;
    
    while(left<=right){
        mid = ((left) + (right - left) / 2);
        ll sum = 0;
        for (int i = 0; i < m;i++){
            ll time =(ll)c1[i];
            ll num = (ll)a1[i];
            ll div = mid / (time);
            ll mod = mid % time;
            if(mod>=1){
                sum = sum + (div+1) *(ll) a1[i];
            }
            else{
                sum = sum + (div) *(ll) a1[i];
            }

        }
        if(sum>=h){
            mini = min(mini, mid);
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    cout << mini << endl;
   
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