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
void inputvv(int k, int p, int n, int m, vector<vector<int>> &v)
{
    for (int i = k; i < n; i++)
    {
        for (int j = p; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
}
void inputvvc(int k, int p, int n, int m, vector<vector<char>> &v)
{
    for (int i = k; i < n; i++)
    {
        for (int j = p; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
}

void solve()

{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n;i++)
        cin >> v[i];
        ll ans = 0;
    vector<map<int, int>> mp(6);
    vector<pair<int, string>> vs;
    for(auto e:v){
        vs.pb({e.size(), e});
    }
    sort(vs.begin(), vs.end());
    v.clear();
    for(auto e:vs){
        v.pb(e.second);
    }
    for(auto s:v){
        int total = 0;
        for (auto d:s){
            total += (d - '0');
        }
        int a = 0, b = 0;
        for (int len = s.size() + 2 - s.size() % 2; len <= 10;len+=2){
            if(len>2*s.size())
                break;

            a = 0, b = 0;
            for (int i = 0; i < s.size() - len / 2;i++){
                a += s[i] - '0';
                b += s[s.size() - i - 1] - '0';
            }
            ans += mp[len - s.size()][total - 2 * a];
            ans += mp[len - s.size()][total - 2 * b];
            
        }
        mp[s.size()][total]++;
        ans++;
    }
    cout << ans << endl;
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);
    // int tt;
    // cin >> tt;
    // for (int i = 1; i <= tt; i++)
    // {
        solve();
    // }
    // solve();
}