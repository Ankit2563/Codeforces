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
    int n;
    cin >> n;
    vi a(n);
    inputi(0, n, a);
    vi even;
    vi odd;
    for (int i = 0; i < n;i++){
        if(a[i]%2==1){
            odd.push_back(a[i]);
        }
        else{
            even.push_back(a[i]);
        }
    }
    if(odd.size()==0||even.size()==0){
        cout << 0 << endl;
        return;
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    int maxiodd = odd[odd.size() - 1];
    int ans = 0;
    for (int i = 0; i < even.size();i++){
          if(maxiodd>even[i]){
              even[i] = maxiodd + even[i];
              maxiodd = even[i];
              ans++;
          }
          else{
              maxiodd=maxiodd + even[i];

              
              ans++;
             
          }
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