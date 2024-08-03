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
    input(0, n, a);
    input(0, n, b);
    int one1 = 0, one2 = 0;
    int remone1 = 0, remone2 = 0;
    for (int i = 0; i < n;i++){
        if(a[i]==1){
            remone1++;
        }
    }
    for (int i = 0; i < n;i++){
        if(b[i]==1){
            remone2++;
        }
    }

    for (int i = 0; i < n; i++)
      {
        if(a[i]==1||b[i]==1){
             if(a[i]==1&&b[i]==1){
                if(one1>one2){
                    one2++;
                    remone2--;
                }
                else{
                    one1++;
                    remone1--;
                }
             }
            else if(a[i]==1){
                one1++;
                remone1--;
            }
            else{
                one2++;
                remone2--;
            }
        }
        else if(a[i]==-1&&b[i]==-1){
             if(one1>one2){
                 one1--;
             }
             else  if(one1<one2){
                 one2--;
             }
             else{
                if(remone1>remone2){
                    one1--;
                    
                }
                else{
                    one2--;
                }
             }
        }
       
          
      }
      if(one1>one2){
          printf("%d \n", one2);
       
      }
      else{
          printf("%d\n", one1);
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