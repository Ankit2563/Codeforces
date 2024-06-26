#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vpi vector<pair<long long, long long>>
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
    vi a(n);
    input(0, n, a);
    map<int, int> mp;
    for(auto it:a){
        mp[it]++;
    }
    vector<pair<int, int>> v;
    for(auto it:mp){
        v.push_back({it.second, it.first});
    }

    sort(v.begin(), v.end(),greater<pair<int,int>>());

    if(v[0].first>=k){
        cout << k - 1 << endl;
    }
    else{
        cout <<  n<< endl;
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