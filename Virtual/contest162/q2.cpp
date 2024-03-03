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
    int n,m;
    cin >> n>>m;
    vi a(n);
    vi b(n);
    input(0, n, a);
    input(0, n, b);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    int maxicor = 0;
    vector<pair<int,int>> v;
    for (int i = 0; i < n;i++){
        q.push({abs(b[i]), a[i]});
        v.push_back({abs(b[i]), a[i]});
        maxicor = max(abs(b[i]), maxicor);
    }
    sort(v.begin(), v.end());
    long long sum = 0;
    for (int i = 0; i < n;i++){
        sum += v[i].second;
        if (sum >1LL*v[i].first*m){
            NO;
            return;
        }
    }
        YES;
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