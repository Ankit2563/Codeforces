#include <bits/stdc++.h>
using namespace std;
// #define ll long long
 #define vi vector<int>
// #define vl vector<ll>
// #define vpi vector<pair<long long, long long>>
// #define vint vector<int>
// #define all(v) v.begin(), v.end()
// #define MOD 1000000007
// #define MOD2 998244353
// #define MX 1000000000
// #define MXL 1000000000000000000
// #define PI (ld)2 * acos(0.0)
// #define pb push_back
// #define sc second
// #define fr first
// #define endl '\n'
// #define ld long double
// #define NO cout << "NO" << endl
// #define YES cout << "YES" << endl
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

    sort(a.begin(), a.end());
    int ans = 0;
    int sum1 = 0, sum2 = 0;

    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= m)
        {
            index = i;
        }
    }
    // int ind = index;
    int j = n - 1;
    int temp = 0;
    while (index >= 0 && j >= 0)
    {
        if (temp == 0)
        {
            while (j >= 0 && a[j] == -1)
            {
                j--;
            }
            if (j < 0)
            {
                cout << -1 << endl;
                break;
            }
            a[j] = -1;
            temp = 1;
            j--;
            ans++;
        }
        else
        {
            while (index >= 0 && a[index] == -1)
            {
                index--;
            }

            if (index < 0)
            {
                cout << -1 << endl;
                break;
            }
           // ans++;
            index--;
            temp = 0;
        }
        
        if (a[index] >= a[j])
        {
            cout <<ans<< endl;
            break;
        }
    }
    //cout << -1 << endl;
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