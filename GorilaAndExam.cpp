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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    input(0, n, a);
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        mp[a[i]]++;

    }
    vector<pair<int, int>> v;
    for(auto it:mp){
        v.push_back({it.second, it.first});
    }
    sort(v.begin(), v.end());

    int oper = 0;
    int index = -1;
    for (int i = 0;i<v.size();i++){
        if(k>=v[i].first){
            k -= v[i].first;
        }
        else{
            index = i;
            break;
        }
    }
    if(index==-1){
        cout << 1 << endl;
    }
    else{
        cout << v.size() - index<< endl;
    }
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