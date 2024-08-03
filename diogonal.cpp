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
    int n, c;
    cin >> n >> c;
    map<int, int> mp;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            mp[i + j]++;
        }
    }
    int ans = 0;
    vector<int> v;
    for(auto it:mp){
        v.push_back(it.second);
    }
    sort(v.begin(), v.end(), greater<int>());
    if(c==0){
        cout << 0 << endl;
        return;
    }
    for(auto it:v){
        c -= it;
        if(c==0){
           if(it!=0){
               ans++;
           }
            break;
        }
        if(c<0){
            ans++;
            break;
        }
        else{
            ans++;
        }
    }
    
    cout << ans<< endl;
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