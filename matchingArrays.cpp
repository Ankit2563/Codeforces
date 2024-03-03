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
        no += (1LL << i) * a[i]; // Using bit manipulation to set the ith bit
    }
    return no;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vi a(n);
    vi b(n);
    inputi(0, n, a);
    
    inputi(0, n, b);
    vector<pair<int, int>> a1;
    vi b1(n);
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        a1.push_back({a[i], i});
        v.push_back({a[i], i});
        b1[i] = b[i];
    }
    
    sort(all(v));
    sort(all(b));
    sort(all(a));
    sort(a1.rbegin(), a1.rend());
    sort(b1.begin(), b1.end());
    reverse(b1.begin(), b1.begin() + x);
    reverse(b1.begin() + x, b1.end());
    ll cnt1 = 0;
    for (ll i = 0; i < n; i++)
    {
        cnt1 += a1[i].first > b1[i];
    }
    if(cnt1!=x){
        NO;
        return;
    }
        int maxi = 0;
    int mini = 0;
    for (int i = 0; i < n;i++){
         if(a[i]>b[i]){
             maxi++;
         }
         if(a[n-i-1]>b[i]){
             mini++;
         }
    }
    vi ans(n, 0);
    int j = 0;
    map<int, int> mp;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        while (j<n&&v[i].first> b[j])
        {
            cnt++;
            j++;
        }
        mp[v[i].first] = cnt;
    }
    int maxx = mp[v[n - 1].first];
  
     

       int index = n - x;
  
        YES;
        j = 0;
        for (int i = index; i < n; i++)
        {
            int putIndex = v[i].second;
            ans[putIndex] = b[j];
            j++;
        }
        for (int i = 0; i < index; i++)
        {
            int putIndex = v[i].second;
            ans[putIndex] = b[j];
            j++;
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << endl;
    
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