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
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n);
    input(0, n,a);
    vi b;
    for (int i = 0; i < n;i++){
        b.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    long long sum = 0;
    int lastIndex = k / m;
    int rem = k % m;
    if(rem!=0){
        lastIndex++;
    }
    long long ans = 0;
   

    vi v;
    map<int, int> mp;
    for (int i = 0; i <lastIndex;i++){
        v.push_back(b[i]);
        mp[b[i]]++;
    }
    vi vv;
    if(k<=m){
        cout << k *(long long) (b[0]) << endl;
        return;
    }
    for (int i = 0; i < n;i++){
        if(mp[a[i]]>0){
            vv.push_back(a[i]);
            mp[a[i]]--;
        }
    }

    for (int i = 0; i <vv.size();i++){
         if(vv[i]==b[v.size()-1]&&rem!=0){
             ans = ans + (vv[i] + sum) * (rem);
             sum += rem;
             rem = 0;
             continue;
         }
         ans = ans + (vv[i] + sum) * (long long)(m);
         sum += m;

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