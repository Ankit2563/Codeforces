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

void input(int i, int n, vector<long long> &a)
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
    int n;
    cin >> n;
    vi a(n);
    input(0, n, a);
    map<pair<int, int>, map<int, int>> mp1;
    map<pair<int, int>, map<int, int>> mp2;
    map<pair<int, int>, map<int, int>> mp3;
    map<pair<int, int>, int> mpp1;
    map<pair<int, int>, int> mpp2;
    map<pair<int, int>, int> mpp3;

    for (int i = 0; i < n-2;i++){
        mp1[{a[i], a[i + 1]}][a[i + 2]]++;
        mp2[{a[i+1], a[i + 2]}][a[i]]++;
        mp3[{a[i], a[i + 2]}][a[i+1]]++;
        mpp1[{a[i], a[i + 1]}]++;
        mpp2[{a[i+1], a[i + 2]}]++;
        mpp3[{a[i], a[i + 2]}]++;
    }

    long long ans = 0;
    for (int i = 0; i < n-2;i++){
        ans = ans + mpp1[{a[i], a[i + 1]}] - mp1[{a[i], a[i + 1]}][a[i + 2]];
        ans = ans + mpp2[{a[i+1], a[i + 2]}] - mp2[{a[i+1], a[i + 2]}][a[i ]];
        ans = ans + mpp3[{a[i], a[i + 2]}] - mp3[{a[i], a[i + 2]}][a[i + 1]];
    }
    cout << ans / 2 << endl;
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