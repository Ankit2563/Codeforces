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

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    input(0, n, a);
    input(0, m, b);
    int maxa = INT_MIN, mina = INT_MAX;
    int maxb = INT_MIN, minb = INT_MAX;
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n;i++){
       
        maxa = max(a[i], maxa);
        mina = min(a[i], mina);
    }
    for (int i = 0; i < m;i++){
        
        maxb = max(b[i], maxb);
        minb = min(b[i], minb);

    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < 2;i++){
        if(i==0){
            if(a[0]>b[m-1]){
                for (int j = 0; j < n; j++)
                {
                    sum1 += a[j];
                }
                continue;
            }
            int temp = a[0];
            a[0] = b[m - 1];
            b[m - 1] = temp;

            sort(a.begin(), a.end());

            sort(b.begin(), b.end());
            for (int j = 0; j < n;j++){
                sum1 += a[j];
            }
          
        }
        else{
            if(b[0]>a[n-1]){
                for (int j = 0; j < n; j++)
                {
                    sum2 += a[j];
                }
                continue;
            }
            int temp = b[0];
            b[0] = a[n - 1];
            a[n - 1] = temp;
            for (int j = 0; j < n; j++)
            {
                sum2 += a[j];
            }
        }
    }
    if(k%2==1){
        cout << sum1 << endl;
    }
    else{
        cout << sum2 << endl;
    }
   
   
    
   

}
// 2 2 5
// 4 5 2 2 5
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}