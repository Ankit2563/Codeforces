#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<long long>
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
void input(int i, int n, vector<int> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}
void inputl(int i, int n, vector<long long> &a)
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
    set<int> last;
    set<int> first;
    set<int> s;
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        if(s.count(a[i])==0)
            first.insert(i);
        s.insert(a[i]);
        mp[a[i]] = i;
    }
    for(auto it:mp){
        last.insert(it.second);
    }
    ll ans = 0;
    ll cnt = 0;
    for (int i = n - 1; i >= 0;i--){
     if(last.count(i))
         cnt++;
      if(first.count(i))
        ans += cnt;
    }
   cout<<ans<< endl;
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