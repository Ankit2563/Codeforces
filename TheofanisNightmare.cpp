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

int find(int i, map<int, int> &m)
{

    int x = i;
    int n = m.size();
    int j = sqrt(x);
    int k = sqrt(x + n);

    for (int f = k + 1; f >= j; f--)
    {
        if (m[f * f - i] == 1)
        {
            m[f * f - i] = 0;
            return f * f - i;
        }
    }
    return -1;
}
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    inputi(0, n, a);

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int index = 1;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        if (sum - temp >= 0)
        {
            ans += index * (long long)temp;
            sum -= temp;
            index++;
        }
        else
        {
            long long flag = a[i];
            while (sum - flag < 0 && i < n)
            {
                i++;
                if (i < n)
                    flag += a[i];
            }
            ans += index * (long long)flag;
            sum -= flag;
            index++;
        }
    }
    cout << ans << endl;
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