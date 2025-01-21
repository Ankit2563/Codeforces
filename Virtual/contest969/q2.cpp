#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<long long, long long>>
#define vint vector<int>
#define all(v) v.begin(), v.end()
#define MOD 1000000007
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
    int n, m;
    cin >> n >> m;
    vi a(n);
    inputi(0, n, a);
    int maxi = a[0];
    for (int i = 0; i < n;i++){
        maxi = max(a[i], maxi);
    }
    for (int i = 0; i < m;i++){
        char ch;
        int l, r;
        cin >> ch >> l >> r;
        if(ch=='+'){
            if(maxi>=l&&maxi<=r){
                cout << ++maxi << " ";
            }
            else{
                cout << maxi << " ";
            }
        }
        else{
            if (maxi >= l && maxi <= r)
            {
                cout << --maxi << " ";
            }
            else
            {
                cout << maxi << " ";
            }
        }
    }
    cout << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
}