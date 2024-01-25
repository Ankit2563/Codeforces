

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

string distribute(int f, int s, int n)
{
    int sum = 0;
    s--;
    for (int i = 0; i < n; i++)
    {
        sum += s;
        s--;
    }
}
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    inputi(0, n, a);
    int init = 1,lastIndex=n-1;
    vector<int> ans;
    for (int i = n - 1; i >= 0;i--){
        int j = lastIndex;
        for ( ; j >= 0;j--)
        {
            if (a[j] >= init)
            {
                init++;
                continue;
            }
            else
            {
                
                break;
            }
        }
        ans.push_back(abs(i - j));
        init--;
        lastIndex = j;
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
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