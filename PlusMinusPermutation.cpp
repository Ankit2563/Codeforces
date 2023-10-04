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
    ll n, x, y;
    cin >> n >> x >> y;
    ll lcm = (x * y) / (__gcd(x, y));
    ll ny = n / y,nx=(n/x);
    long long sum = ((n) * (n + 1)) / 2;
    int common = n / lcm;
    if(lcm>n){
        cout << sum-((n-nx)*(n-nx+1))/2-((ny)*(ny+1)/2)<<endl;
    }
    else{
        cout << sum - ((n - nx + common) * (n - nx + common + 1)) / 2 - ((ny - common) * (ny + 1 - common)) / 2 << endl;;
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