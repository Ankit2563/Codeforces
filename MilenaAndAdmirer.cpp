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
    int n;
    cin >> n;
    vi a(n);
    
    input(0, n, a);
    ll oper = 0;
    

    for (int i = n - 2; i >= 0;i--){
        int t = (a[i] + a[i + 1] - 1) / a[i + 1];
        int k = a[i] / t;
        a[i] = k;
        oper += t - 1;
       
    }
    cout << oper << endl;
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