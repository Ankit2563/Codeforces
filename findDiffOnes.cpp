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
    int n;
    cin >> n;
    vi a(n);
    inputi(0, n, a);
    vi b(n);
    int num = a[0];
    int assign = 0;
    b[0] = -1;
    for (int i = 1; i < n;i++){
           if(num!=a[i]){
               b[i] = i-1;
               num = a[i];
              
           }
           else{
               b[i] = b[i-1];
           }
    }
    int q;
    cin >> q;
    vector<pair<int, int>> v(q);
    for (int i = 0; i < q;i++){
        cin >> v[i].first >> v[i].second ;
    }
        for (int i = 0; i < q; i++)
        {
            int x = v[i].first;
            int y = v[i].second;

            if (b[x - 1] != b[y - 1])
            {
                cout << b[y-1]+1<< " " <<y<< endl;
            }
            else{
            cout << -1 << " " << -1 << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--){
    solve();
    }
}
