#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
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
void input(int i, int n, vector<int> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}

void solve()
{
    int n,t;
    cin >> n >> t;
    vi a(n); 
    vi b(n);
    input(0, n, a);
    input(0, n, b);

    int cnt = 0;
    for (int i = 0; i < n;i++){
        a[i] += cnt;
        cnt++;
    }
    int index = -1;
    int ent = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<=t){
            if(ent<b[i]){
                index = i + 1;
                ent = b[i];
            }
        }

    }
    cout << index << endl;

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