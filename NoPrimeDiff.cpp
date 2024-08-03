#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
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

bool isPrime(int n)
{
    
    if (n <= 1)
        return false;

    
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>>v(n, vector<int>(m));
      int one = 1;
    if(n%2==0){
        for (int i = 0; i < m;i++){
            for (int j = 0; j < n;j++){
                v[j][i] = one;
                one++;
            }
        }
    }
    else{
        if(m%2==0){
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    v[i][j] = one;
                    one++;
                }
                cout << endl;
            }
        }
        else{
            
            for (int i = 1; i < n;i+=2){
                for (int j = 0; j < m;j++){
                    v[i][j] = one;
                    one++;
                }
            }
            for (int i = 0; i < n;i+=2){
                for (int j = 0; j < m;j++){
                    v[i][j] = one;
                    one++;
                }
            }
        }
        
    }

    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
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