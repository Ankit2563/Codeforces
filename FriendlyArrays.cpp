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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    input(0, n, a);
    input(0, m, b);
    int maxvalue = a[0];
    int temp = b[0];
    for (int i = 1; i < m;i++){
        temp |= b[i];
    }

    for (int i = 0; i < n;i++){
        if(i>0)
        maxvalue ^= a[i];
        
        a[i] = temp | a[i];
    }
    int minvalue = a[0];
    for (int i = 1; i < n;i++){
        minvalue ^= a[i];
    }
    cout << min(maxvalue, minvalue) << " " << max(maxvalue, minvalue) << endl;
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