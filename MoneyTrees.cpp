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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    input(0, n, a);
    input(0, n, b);
    ll count = 0;
    
    int ans = 0;

    vector<int> div(n);
   
    for (int i = 1; i < n;i++){
       if(b[i-1]%b[i]==0)
           div[i-1] = 1;
       else
           div[i-1] = 0; 
    }

    div[n - 1] = 1;

    
   
    int len = 0;
    for (int i = 0; i < n;i++){
       count += a[i];
       if(div[i]==1){
            if(count<=k){
             len++;
             ans = max(len, ans);
            }
            else{
            
             ans = max(len, ans);
             count = a[i];
             len = 1;
             }
       }
       else{
             if(count<=k){
              ans = max(len + 1, ans);
             }
             else{
              ans = max(len, ans);
             }
             len = 0;
             count = 0;
       }
    }

    if(count<=k){
       ans = max(len, ans);
    }
    cout << ans << endl;
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