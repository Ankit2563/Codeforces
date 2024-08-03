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

void input(int i, int n, vector<long long> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}
void inputvv(int i, int m, int n, vector<vector<long long>> &v)
{
    for (int k = i; k < n; k++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[k][j];
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    vi b(n);
    vi c(n);
    input(0, n, a);
    input(0, n, b);
    input(0, n, c);
    for (int i = 1; i < n;i++){
        a[i] = a[i - 1] + a[i];
        b[i] = b[i - 1] + b[i];
        c[i] = c[i - 1] + c[i];
    }
    int tot = a[n - 1];
    int la=-1, ra=-1, lb=-1, rb=-1, lc=-1, rc=-1;
    int prevVal1 = 0,l1=0, prevVal2 = 0,l2=0, prevVal3 = 0,l3=0;
    int temp1 = 0, temp2 = 0, temp3 = 0;
    for (int i = 0; i < n;i++){
      int sum1=  a[i] - prevVal1;
      int sum2=  b[i] - prevVal2;
      int sum3=  c[i] - prevVal3;
      IF
      
    }

    if(temp1==0||temp2==0||temp2==0){
        cout << -1 << endl;
    }
    else{
        cout << la << " " << ra << " " << lb << " " << rb << " " << lc << " " << rc << endl;
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