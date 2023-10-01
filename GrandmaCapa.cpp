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
int funct(int s,int e,string &st){
    if(s>e){
        return 0;
    }

    if(st[s]==st[e]){
        return 0 + funct(s + 1, e - 1, st);
    }
    else{
        return min(1 + funct(s + 1, e, st), 1 + funct(s, e - 1, st));
    }
}

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    if (funct(0, n - 1, str)==n-1){
        cout << -1 << endl;
    }
    else{
        cout << funct(0, n - 1, str) << endl;
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