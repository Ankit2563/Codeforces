#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<long long>
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
    int n,m;
    cin >> n>>m;
    vi a(m);
    vi b;
    input(0, m, a);
    //long long sum = accumulate(a.begin(), a.end(), 0)
    sort(a.begin(), a.end());
    for (int i = 1; i < m;i++){
        b.push_back(a[i] - a[i - 1]-1);
    }
    b.pb(n-a[m-1]+a[0]-1);

    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    ll ans = 0;
    int j  = 0;
    for (int i = 0; i < b.size();i++){
        if(b[i]-2*j-1>=0){
             if(b[i]-2*j-1==0){
                 ans++;
                 j++;
             }
             else{
                 ans += b[i] - 2 * j - 1;
                 j += 2;
             }
            
        }
    }
    cout << n-ans << endl;
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