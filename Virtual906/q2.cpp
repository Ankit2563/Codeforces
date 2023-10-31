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
void inputvv(int k, int p, int n, int m, vector<vector<int>> &v)
{
    for (int i = k; i < n; i++)
    {
        for (int j = p; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
}
void inputvvc(int k, int p, int n, int m, vector<vector<char>> &v)
{
    for (int i = k; i < n; i++)
    {
        for (int j = p; j < m; j++)
        {
            cin >> v[i][j];
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    string s1, s2;
    cin >> s1;
    cin >> s2;

    int cnt = 0;
    for (int i = 0; i < n - 1;i++){
        if(s1[i]==s1[i+1]){
            cnt++;
        }
    }
    if(cnt==0){
        YES;
        return;
    }
    for (int i = 0; i < m - 1; i++)
    {
        if (s2[i] == s2[i + 1])
        {
            NO;
            return;
        }
    }
    for (int i = 0; i < n - 1;i++){
        if(s1[i]=='1'&&s1[i+1]=='1'){
            if(s2[0]=='1'||s2[m-1]=='1'){
                NO;
                return;
            }
        }
         if(s1[i]=='0'&&s1[i+1]=='0'){
            if (s2[0] == '0' || s2[m - 1] == '0')
            {
                NO;
                return;
            }
         }
    }
    YES;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve();
    }
    // solve();
}