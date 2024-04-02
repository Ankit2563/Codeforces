#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<long long, long long>>
#define vint vector<int>
#define all(a) a.begin(), a.end()
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
long long getNo(vi &a)
{
    ll no = 0;
    for (int i = 0; i < 64; i++)
    {
        no += (1LL << i) * a[i]; // Using bit manipulation to set the ith bit
    }
    return no;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    set<int> SET;
    for (int i = 0; i < 32;i++){
        SET.insert((int)pow(2, i));
    }
    int gcd = __gcd(n, m);
    if(n%m==0){
        cout << 0 << endl;
        return;
    }
    int n1 = n / gcd, m1 = m / gcd;
    if(SET.find(m1)==SET.end()){
        cout << -1<< endl;
        return;
    }
    ll rem = n % m;
    ll one = 1;
    ll start=1;
    ll oper = 0;
    ll value = rem;
    
    while (true)
    {
      if(value<m){
          oper = oper + value;
          value = value * 2;
      }
      else if(value==m){
          break;
      }
      else{
          value = value - m;

      }
      
    }
    cout << oper << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}