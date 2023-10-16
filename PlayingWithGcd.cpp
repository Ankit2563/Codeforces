// 1 1
// 1
// 1 1
// 2
// 1 1
// 3
// 1 1
// 4
// 1 2
// 1
// 1 2
// 2
// 1 2
// 3
// 1 2
// 4
// 1 3
// 1
// 1 3
// 2
// 1 3
// 3
// 1 3
// 4
// 1 4
// 1
// 1 4
// 2
// 1 4
// 3
// 1 4
// 4
// 1 5
// 1
// 1 5
// 2
// 1 5
// 3
// 1 5
// 4
// 1 6
// 1
// 1 6
// 2
// 1 6
// 3
// 1 6
// 4
// 1 7
// 1
// 1 7
// 2
// 1 7
// 3
// 1 7
// 4
// 2 1
// 1 1
// 2 1
// 1 2
// 2 1
// 1 3
// 2 1
// 1 4
// 2 1
// 2 1
// 2 1
// 2 2
// 2 1
// 2 3
// 2 1
// 2 4
// 2 1
// 3 1
// 2 1
// 3 2
// 2 1
// 3 3
// 2 1
// 3 4
// 2 1
// 4 1
// 2 1
// 4 2
// 2 1
// 4 3
// 2 1
// 4 4
// 2 2
// 1 1
// 2 2
// 1 2
// 2 2
// 1 3
// 2 2
// 1 4
// 2 2
// 2 1
// 2 2
// 2 21
// 2 2
// 2 3
// 2 2
// 2 4
// 2 2
// 3 1
// 2 2
// 3 2
// 2 2
// 3 3
// 2 2
// 3 4

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

void PrimeFactors(vector<int> &v, int n)
{
    while (n % 2 == 0)
    {
        v.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n = n / i;
        }
    }
    if (n > 2)
        v.push_back(n);
}
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

const int MAX = 200'007;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    inputi(0, n, a);
    if(n==1||n==2){
        YES;
        return;
    }
    vi b;
    b.push_back(a[0]);
    for (int i = 1; i < n ;i++){
        b.push_back((a[i - 1] * a[i]) / __gcd(a[i-1],a[i]));
    }
    b.push_back(a[n-1]);
    for (int i = 0; i < n;i++){
        if(a[i]!=(__gcd(b[i],b[i+1]))){
            NO;
            return;
        }
    }
    YES;
    return;
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
