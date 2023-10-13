#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mpq priority_queue<int, vector<int>, greater<int>>
#define pq priority_queue<int>
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

void primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }

   
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }

   
    if (n > 2)
        cout << n << " ";
}
int funct(priority_queue<int> &q)
{
    int to1 = q.top();
    q.pop();
    while (!q.empty())
    {
        if (to1 != q.top())
        {

            return 0;
        }
        q.pop();
    }
    return 1;
}
void solve()
{

    int n;
    cin >> n;
    vector<vector<char>>v(n, vector<char>(n));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin>>v[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n / 2;i++){
        for (int j = i; j < n-i-1;j++){
            char ch1 = v[i][j];
            char ch2 = v[j][n-i-1];
            char ch3 = v[n - i - 1][n-j-1];
            char ch4 = v[n - j - 1][i];

            char maxi = max(ch1, max(ch2, max(ch3, ch4)));
            ans += abs(maxi - ch1) + abs(maxi - ch2) + abs(maxi - ch3) + abs(maxi - ch4);
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