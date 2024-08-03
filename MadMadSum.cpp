#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define ll long long
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define MOD 1000000007
#define MOD2 998244353
#define MX 1000000000
#define MXL 1000000000000000000
#define PI 2 * acos(0.0)
#define pb push_back
#define sc second
#define fr first
#define endl '\n'
#define ld long double
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void input(int n, vi &a)
{
    for (int k = 0; k < n; k++)
    {
        cin >> a[k];
    }
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    input(n, a);

    map<int, int> mp;
    vi v;
    vi v1;
    int maxi = 0;

    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
        if (mp[a[i]] >= 2)
        {
            maxi = max(maxi, a[i]);
        }
        v.pb(maxi);
    }

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        sum += v[i];
    }
    int maxi1 = 0;
    map<int, int> mpp1;
    for (int i = 0; i < n;i++){
        mpp1[v[i]]++;
        if(mpp1[v[i]]>=2){
            maxi1 = max(maxi1, v[i]);
        }
        v1.push_back(maxi1);
        }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] != 0)
        {
            cnt = i;
            break;
        }
    }

    map<int, int> mpp;
    for (int i = cnt; i < n; i++)
    {
        mpp[v1[i]]++;
    }

    vector<int> b;

    for (auto it : mpp)
    {
        b.push_back(it.first);
    }
    sort(b.begin(), b.end());

    for (int i = 0; i < b.size(); i++)
    {
        int ele = b[i];
        int freq = mpp[ele];
        int remEle = n - cnt - freq;
        cnt += freq;
        if (i == b.size() - 1)
        {
            sum += ((freq * (ll)(freq + 1)) / 2) * (ll)ele;
            continue;
        }
        sum += ((remEle) * (ll)ele) * (ll)freq + ((ele * (ll)(((freq) * (ll)(freq + 1)) / 2)));
    }

    cout << sum << endl;
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
