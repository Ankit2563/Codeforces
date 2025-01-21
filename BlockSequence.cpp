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
int dp[200001];
int find(int index,int n,vi &a){
    if(index>n)
        return INT_MAX;
   if(index==n)
       return 0;
 if(dp[index]!=-1)
           return dp[index];

    int maxi = INT_MAX;

    maxi = min(find( index+a[index] + 1, n, a), 1+find(index+1, n, a));

    return dp[index]=maxi;
}
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    memset(dp, -1, sizeof(dp));
    input(0, n, a);

    int ans = find(0, n, a);
    cout << ans << endl;
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