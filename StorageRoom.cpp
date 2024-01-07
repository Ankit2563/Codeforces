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
    vector<vector<int>> v(n, vector<int>(n));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cin >> v[i][j];
        }
    }
    vi a(n,((1<<30)-1));

    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            if(i!=j){
                a[i] &= v[i][j];
                a[j] &= v[i][j];
            }
        }
    }
        int temp = true;
     for (int i = 0; i < n;i++){
        for (int j = i+1; j < n; j++)
        {
            if(v[i][j]!=(a[i]|a[j])){
                temp = false;
            }        
        }
    }
     
       if(temp==true){
           YES;

           for (int i = 0; i < n; i++)
           {
               cout << a[i] << " ";
           }
        cout << endl;
       }
       else{
           NO;
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