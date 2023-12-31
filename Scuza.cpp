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

void solve()
{
    int n, q;
    cin >> n >> q;
    vi a(n); 
    vi b(q);
    inputi(0, n, a);
    inputi(0, q, b);
    map<long long, int> m;
    vl prefix(n);
    prefix[0] = a[0];
    for (int i = 1; i < n;i++){
        prefix[i] = prefix[i - 1] + (ll)a[i];
    }
    int maxi = -1;
    for (int i = 0; i < n;i++){
        a[i] = max(a[i], maxi);
        maxi = a[i];
    }
    for (int i = 0; i < q;i++){
        int search = b[i];
        int idx = upper_bound(a.begin(), a.end(),search)-a.begin();
        if(idx==0){
            cout << 0 << " ";
        }
        else
        cout << prefix[idx - 1] << " ";
    }
    cout << endl;
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