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
    vector<pair<int, int>> a(2);

    cin >> a[0].first >> a[0].second;
    cin >> a[1].first >> a[1].second;
    sort(a.begin(), a.end());
    int l = a[0].first, r = a[0].second;
    int L = a[1].first, R = a[1].second;
    if(r<L){
        cout << 1 << endl;
    }
   else if(r==L){
        cout << 2 << endl;
    }
    else if(l==L&&r!=R){
        cout << r - l + 1 << endl;
    }
    else if (l == L && r == R){
        cout << r - l  << endl;
    }
    else if (l != L && r == R){
        cout <<R-max(l,L) +1 << endl;
    }
    else if (R>l&&R<r){
        cout << R-L+2<< endl;
    }
    else{
        cout << r - L + 2 << endl;
    }
   
   
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
}