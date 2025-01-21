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
    int st[n];
    int en[n];
    for (int i = 0; i < n;i++)
        cin >> st[i];
    for (int i = 0; i < n;i++)
        cin >> en[i];
    set<pair<int, int>> se;
    for (int i = 0; i < n;i++){
        se.insert({st[i], en[i]});
    }
    vector<int> start;
    vector<int> end;
    int i = 0;
    for(auto x:se){
        int l = x.first;
        int r = x.second;
        start.push_back(l);
        end.push_back(r);
        i++;
    }
    int size = start.size();
    long ans = 0;
    for (int i = 0; i < size;i++){
        auto it = upper_bound(start.begin(), start.end(), end[i]);
        int index=distance(start.begin(), it);
        ans += (size - index);
    }
    cout << ans << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
}