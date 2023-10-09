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
double find(int x, int y, int v, int w)
{
    double ans = sqrt((x - v) * (x - v) + (y - w) * (y - w));
    return ans;
}


void solve()
{
    // int n;
    // cin>>
    int x, y, a1, a2, b1, b2;

    cin >> x >> y >> a1 >> a2 >> b1 >> b2;
  
    double x1, x2, x3, x4, x5;

    x1 = find(x, y, a1, a2);
    x2 = find(x, y, b1, b2);
    x3 = find(0, 0, a1, a2);
    x4 = find(0, 0, b1, b2);
    x5 = find(a1, a2, b1, b2);


    double p = max(min(x1, x2), min(x3, x4));
    if (min(x1, x2) == x1 && min(x3, x4) == x3)
    {
    }
    else if (min(x1, x2) == x2 && min(x3, x4) == x4)
    {
    }
    else
    {
        if (x5 > 2 * p)
        {
            p = x5 / 2;
        }
    }


    cout << setprecision(11);
    cout << p << endl;

    return;
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