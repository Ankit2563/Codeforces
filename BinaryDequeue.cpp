#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vv vector<vector<int>>
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

int funct(int i,int j,int op,int sum,int s,vi &a){
    if(sum==s){
        return 0;
    }

    if(a[i]==0&&a[j]==0){
        return 2 + funct(i + 1, j - 1, op, sum, s, a);
    }
    else if(a[i]==0&&a[j]==1){
        return 1 + funct(i, j - 1, op, sum-1, s, a);
        
    }
}
void solve()
{
    int n, s;
    cin >> n >> s;
    vi a(n);
    inputi(0, n, a);
    int i = 0, j = n - 1;
    int op = 0;
    int sum = accumulate(a.begin(), a.end(), 0);
    funct(i, j, op, sum,s, a);
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