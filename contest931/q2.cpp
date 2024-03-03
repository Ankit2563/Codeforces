#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<long long, long long>>
#define vint vector<int>
#define all(a) a.begin(), a.end()
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
long long getNo(vi &a)
{
    ll no = 0;
    for (int i = 0; i < 64; i++)
    {
        no += (1LL << i) * a[i]; // Using bit manipulation to set the ith bit
    }
    return no;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vi a(n);
    inputi(1, n, a);
    vi b(n);
    inputi(0, n, b);
    a[0] = m;
    sort(all(a));
    sort(all(b));
    int i = 0;
    int cnt = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[i] == b[j])
        {
            continue;
        }
        else if (b[j] > a[i])
        {
            cnt++;
            i++;
        }
    }
    cout << n - cnt << endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}