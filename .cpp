

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
int funct(int src, int n, vector<int> &c, vector<int>&dp)
{
    if (src >= n - 1)
    {   
        return 0;
       }
       if(dp[src]!=-1){
        return dp[src];
       }

    if(src+3<n){
        return dp[src]=max(c[src + 1] - c[src] + funct(src + 1, n, c,dp), c[src + 3] - c[src] + funct(src + 3, n, c,dp));
    }
    if(src+1<n&&src+3>n-1){
        return dp[src]= c[src + 1] - c[src] + funct(src + 1, n, c,dp);
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> c(n);
    input(0, n, c);
    vector<int> dp(n, -1);
    return funct(0, n, c,dp);
}

int main()
{

    

        solve();
    
}