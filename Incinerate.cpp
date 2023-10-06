
#include <bits/stdc++.h>


using namespace std;

#define f first
#define endl '\n'
#define s second
#define pb push_back
#define md 998244353

#define vi vector<int>
#define mod 1000000007
#define inf 1999999999999999999;
#define vp vector<pair<int, int>>
#define all(c) c.begin(), c.end()
#define rall(c) c.rbegin(), c.rend()
#define in(a)         \
    for (auto &i : a) \
    cin >> i
#define dbg(x) cout << #x << "->" << x << endl
#define mem(a, val) memset(a, val, sizeof(a))
#define out(a)            \
    for (auto i : a)      \
        cout << i << " "; \
    cout << endl
#define ebg(x, y) cout << #x << "->" << x << " " << #y << "->" << y << endl


void solve()
{
    int n, k;
    cin >> n >> k;
    int h[n];
    vi p(n);
    in(h);
    in(p);
    vp v;
    for (int i = 0; i < n; i++)
    {
        v.pb({p[i], h[i]});
    }
    sort(all(v));

    int mh = *max_element(h, h + n);
    int mnp = *min_element(all(p));
    int ptr = 0, sub = 0;
    bool ok = true;

    while (ptr < n && k > 0)
    {
        sub += k;
        while (ptr < n && (v[ptr].second) - sub <= 0)
        {
            ptr++;
        }
        if (ptr < n)
        {
            k -= v[ptr].first;
        }
        else
            break;
    }

    if ((ptr >= n) && (k >= 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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