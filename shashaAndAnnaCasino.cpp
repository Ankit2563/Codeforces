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
    int k, x, a;
    cin >> k >> x >> a;

    int loss = 1;
    int rem1 = a;
    for (int i = 0; i < x;i++){
      
    }
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