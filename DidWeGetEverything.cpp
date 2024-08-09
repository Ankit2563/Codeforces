#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<long long, long long>>
#define vint vector<int>
#define all(a) a.begin(), a.end()
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
long long getNo(vi &a)
{
    ll no = 0;
    for (int i = 0; i < 64; i++)
    {
        no += (1LL << i) * a[i]; 
    }
    return no;
}
void print(char ch,int n){
    for (int i = 0; i < n;i++){
        cout << ch;
    }
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    set<int> s;
    vector<vector<int>> v(n, vector<int>(2));
    for (int i = 0; i < n;i++){
        cin >> v[i][0] >> v[i][1];
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
  
    long long ans = 0;
    vector<int>sort1;
    for (int i = 0; i < n; i++)
    {

        int x = v[i][0];
        int x1 = v[i][1];
        
        
        vector<int>::iterator index1 = upper_bound(sort1.begin(), sort1.end(), x1);

        int bigger = index1 - sort1.begin();
        sort1.insert(index1, x1);
        ans += bigger;
    }
    cout<<ans<<endl;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}