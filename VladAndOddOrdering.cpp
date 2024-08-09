#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
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

void input(int i, int n, vector<long long> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}
void inputvv(int i, int m, int n, vector<vector<long long>> &v)
{
    for (int k = i; k < n; k++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[k][j];
        }
    }
}

void solve()
{

    ll n, k;
    cin >> n >> k;
    ll oddNumber = (n + 1) / 2;
    if(k<=oddNumber){
        cout << 2 * k -1 << endl;
        return;
    }
    ll no = oddNumber;
    ll su = 4;
    for (int i = 2; i<10000000000000;){
        ll rem = (n - i)/su+1;
        ll prev = no;
        no = no+(rem); 
        if(rem==0){
            cout << i << endl;
            break;
        }
       else if(no>=k){
            ll rem2 =  k-prev;
            if(rem2==1){
                cout << i << endl;
                break;
            }
            cout << i + su * (rem2-1 )<< endl;
            break;
        }
        i = i * 2;
        su = su * 2;
    }
    
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
