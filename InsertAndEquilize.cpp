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
int funct(int s, int e, string &st)
{
    if (s > e)
    {
        return 0;
    }

    if (st[s] == st[e])
    {
        return 0 + funct(s + 1, e - 1, st);
    }
    else
    {
        return min(1 + funct(s + 1, e, st), 1 + funct(s, e - 1, st));
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    
    map<long long, int> m;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        m[a[i]]++;
    }
     sort(a.begin(), a.end());
    if(n==1){
        cout << 1 << endl;
        return;
    }
     int gc = abs(a[1]-a[0]);
    for (int i = 1; i < n-1;i++){
       
        gc = __gcd(gc, (int)abs(a[i+1]-a[i]));
    }
  long long no=  a[n - 1] + (long long)gc;


  long long last = a[n - 1];
  long long  init = 1;
  while(m[last-init*(long long)gc]!=0){
      init++;
  }
  long long ans = 0;
  if(init<n){
      no = a[n - 1];
      ans += init;
  }
  else{
      no = a[n - 1] + gc;
    
  }
  for (int i = 0; i < n; i++)
  {
      long long temp = (no - a[i]);
      ans = ans + (temp / (long long)gc);
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