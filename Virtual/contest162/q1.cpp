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
    vi a(n);
    input(0, n, a);
    int f1 = -1,l1=-1,cnt=0;

    for (int i = 0; i < n;i++){
          if(a[i]==1&&cnt==0){
              cnt++;
              f1 = i;
              
          }
          if(a[i]==1){
              l1 = i;
          }
    }
    int ans = 0;
    for (int i = f1; i <= l1;i++){
           if(a[i]==0)
               ans++;
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