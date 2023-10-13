#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mpq priority_queue<int, vector<int>, greater<int>> 
#define pq priority_queue<int>
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

int funct(priority_queue<int> &q)
{
    int to1 = q.top();
    q.pop();
    while (!q.empty())
    {
        if (to1 != q.top())
        {

            return 0;
        }
        q.pop();
    }
    return 1;
}
void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    pq q;
    mpq g;
    q.push(x);
    q.push(y);
    q.push(z);
    g.push(x);
    g.push(y);
    g.push(z);
    for (int i = 0; i < 3;i++){
          if(q.top()==g.top()){
            YES;
            return;
          }
          else{
            int val = q.top();
            q.pop();
            q.push(g.top());
            q.push(val - g.top());
            g.push(val - g.top());
          }
    }
    if (q.top() == g.top())
    {
          YES;
          return;
    }
    NO;
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