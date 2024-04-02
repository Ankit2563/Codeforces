#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<long long, long long>>
#define vint vector<int>
#define all(a) a.begin(), a.end()
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
long long getNo(vi &a)
{
    ll no = 0;
    for (int i = 0; i < 64; i++)
    {
        no += (1LL << i) * a[i]; // Using bit manipulation to set the ith bit
    }
    return no;
}
void solve()
{
    // int n, m;
    // cin >> n >> m;
    // map<int, int> mp;
    // for (int i = 0; i < 32; i++)
    // {
    //     mp[(int)pow(2, i)]++;
    // }
    // int rem = n;

    // cout << 0 << endl;

    // if (n > m)
    // {
    //     rem = n - m;
    // }
    int n;
    cin >> n;
    vector<int> a(n + 5);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int prefixbits[32][n + 5];

    for (int i = 0; i < 32; i++)
    {
        for (int j = 0; j < n + 5; j++)
        {
            prefixbits[i][j] = 0;
        }
    }

    for (int j = 31; j >= 0; j--)
    {
        prefixbits[j][0] = ((a[0] >> j) & 1);
        for (int i = 1; i < n; i++)
        {
            prefixbits[j][i] = ((a[i] >> j) & 1);
            prefixbits[j][i] += prefixbits[j][i - 1];
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        int l, k;
        cin >> l >> k;
        --l;
        int left = l, right = n - 1;
        int out = -1;

        if (a[l] < k)
        {
            cout << "-1 ";
            continue;
        }

        while (left <= right)
        {
            int mid = (left + right) / 2;

            int val = 0;

            for (int i = 0; i < 32; i++)
            {
                int x = prefixbits[i][mid];
                if (l != 0)
                    x -= prefixbits[i][l - 1];
                if (x == mid - l + 1)
                {
                    val = val | 1LL << i;
                }
            }

            if (val >= k)
            {
                out = mid + 1;
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
        cout << out << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}