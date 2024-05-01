#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vpi vector<pair<long long, long long>>
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
    int n, m;
    cin >> n >> m;

    vector<vector<char>> a(n, vector<char>(m));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            char ch;
            cin >> ch;
            a[i][j] = ch;
        }
    }

    char ul = a[0][0],ur=a[0][m-1],bl=a[n-1][0],br=a[n-1][m-1];
    if(ul==br||ur==bl){
        YES;
        return;
    }

    if(ul==ur){
        int temp = 0;
        for (int i = 1; i < m - 1;i++){
            if(a[0][i]==bl){
                YES;
                return;
            }
        }
        for (int i = 1; i < m - 1; i++)
        {
            if (a[n-1][i] == ul)
            {
                YES;
                return;
            }
        }
    }
    else if(ul==bl){

        for (int i = 0; i < n - 1;i++){
            if(bl==a[i][m-1]){
                YES;
                return;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (br == a[i][0])
            {
                YES;
                return;
            }
        }
    }
    NO;
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