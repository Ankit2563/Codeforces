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
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    int count = 0;
    for (int i = 0; i < 10;i++){
           if(x.find(s)!=string::npos){
            cout << count << endl;
            return;
           }
           x += x;
           count++;
    }
    cout << -1 << endl;
    return;
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