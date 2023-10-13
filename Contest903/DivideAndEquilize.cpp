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

void primeFactors(int n, map<int, int>&m)
{
    while (n % 2 == 0)
    {
        m[2]++;
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {

        while (n % i == 0)
        {
            m[i]++;
            n = n / i;
        }
    }

    if (n > 2)
        m[n]++;
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    inputi(0, n, a);
    map<int, int> m;
    for (int i = 0; i < n;i++){
        primeFactors(a[i], m);
    }
    for (auto i:m){
        if(i.second%n!=0){
            NO;
            return;
        }
    }
    YES;
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