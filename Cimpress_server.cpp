#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vpi vector<pair<long long, long long>>
#define vint vector<int>
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

// Input function to read a vector
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
    int n, m;
    cin >> n >> m;
    vi a(m);
    input(0, n, a);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    for (int i = 0; i < n;i++){
        q.push({0, i + 1});
    }
    vector<int> ans;
    for (int i = 0; i < m;i++){
        auto p = q.top();
        q.pop();
        ans.push_back(p.second);
        q.push({p.first + a[i], p.second});
    }
    for (int i = 0; i < ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
