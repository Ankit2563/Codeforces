// 2 1
// 0 1
// 1 1
// 0
// 2 1
// 0 0
// 7 8
// 1 1 1 1 0 0 0
// 6 3
// 1 1 1 1 1 0
// 1 1
// 1
// 1 1
// 1
// 4 2
// 1 1 0 0
// 5 1
// 0 0 0 1 0
// 4 1
// 0 1 0 0
// 5 1
// 0 1 0 1 1
// 7 4
// 1 1 1 1 0 0 1
// 4 3
// 1 1 1 0
// 1 1
// 0
// 7 2
// 0 0 0 0 1 1 1
// 10 4
// 1 0 1 0 0 1 1 1 0 0
// 7 4
// 0 1 0 1 1 1 0
// 7 8
// 0 1 0 1 1 0 0
// 5 2
// 1 1 0 0 1
// 1 1
// 0
// 4 2
// 0 1 0 1
// 2 1
// 1 1
// 7 2
// 1 0 0 0 1 0 1
// 2 1
// 0 0
// 9 3
// 1 1 0 0 0 0 1 0 0
// 5 2
// 0 1 0 0 1
// 9 5
// 1 0 0 1 0 0 1 1 1
// 3 1
// 0 1 0
// 8 1
// 0 1 0 1 0 1 1 0
// 8 1
// 0 0 0 0 0 0 1 0
// 10 5
// 1 0 1 1 0 1 1 0 0 1
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
int prev = 0;
    int n,m;
    cin >> n>>m;
    vi a(n);
    inputi(0, n, a);
    //long long ans = accumulate(a.begin(), a.end(),0);
    map<int, int> m1;
    long long ans = 0;
    for (int i = 0; i < n;i++){
        ans += a[i];
        m1[i] = a[i];
    }
        int val = 0;
    for (int i = 0; i < m;i++){
        int temp,idx,x;
        cin >> temp;
        if(temp==1){
            cin >> idx >> x;
            idx--;

            if (!m1.count(idx))
            {
                m1[idx] = prev;
                }
                ans -= m1[idx];
                m1[idx] = x;
                ans += m1[idx];
        }
        else{
            cin >> x;
            prev = x;
            ans = x * 1LL * n;
            m1.clear();
            
        }
        cout << ans << endl;
    }
}

int main()
{
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tt;
//     cin >> tt;
//     for (int i = 1; i <= tt; i++)
//     {
        solve();
    // }
    // solve();
}
