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

    
    int x, y, k;
    cin >> x >> y >> k;
    int totalx = x * k;
    int totaly = y * k;

    if(k%2==1){
        int p = (k - 1) / 2;
        x = x - p;
        y = y - p;
        for (int i = 0; i < k;i++){
            cout << x + i << " " << y + i  << endl;
        }
    }
    else{
        int p = k / 2;
        x = --x-2*(p-1);
        y = --y -2*(p-1);
        for (int i = 0; i < k;i++){
            cout << x + 2*i << " " <<y + 2*i << endl;
        }
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    solve();
}