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

int dp[1001][1001][2][3];

int helper(int x, int y, int dir, int times, vector<vector<int>> &matrix, int n)
{
    if (x == n - 1 && y == n - 1)
        return matrix[x][y];

    if (x < 0 || x >= n || y < 0 || y >= n)
        return 0;

    if (dp[x][y][dir][times] != -1)
        return dp[x][y][dir][times];

    if (times == 2)
    {
        if (dir == 0)
        {
            return dp[x][y][dir][times] = matrix[x][y] + helper(x + 1, y, 1, 1, matrix, n);
        }
        else
        {
            return dp[x][y][dir][times] = matrix[x][y] + helper(x, y + 1, 0, 1, matrix, n);
        }
    }
    else
    {
        if (dir == 0)
        {
            return dp[x][y][dir][times] = max(
                       matrix[x][y] + helper(x, y + 1, dir, times + 1, matrix, n),
                       matrix[x][y] + helper(x + 1, y, 1, 1, matrix, n));
        }
        else
        {
            return dp[x][y][dir][times] = max(
                       matrix[x][y] + helper(x + 1, y, dir, times + 1, matrix, n),
                       matrix[x][y] + helper(x, y + 1, 0, 1, matrix, n));
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    memset(dp, -1, sizeof(dp));
    cout << helper(0, 0, 0, 0, matrix, n) << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}
