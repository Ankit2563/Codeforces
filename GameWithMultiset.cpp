// 2 8
// 2 0
// 2 5
// 2 2
// 2 2
// 1 1
// 1 3
// 2 6
// 2 3
// 1 23
// 2 8
// 1 24
// 2 3
// 1 26
// 2 7
// 2 3
// 1 2
// 2 5
// 1 10
// 2 1
// 1 3
// 2 4
// 2 2
// 2 9
// 2 2
// 2 0
// 2 2
// 1 21
// 2 5
// 2 9
// 2 5
// 1 11
// 2 8
// 2 3
// 1 21
// 1 22
// 1 25
// 2 3
// 2 0
// 1 21
// 2 7
// 1 12
// 2 9
// 2 9
// 2 5
// 1 10
// 1 20
// 1 15
// 2 6
// 1 25
// 2 8
// 2 9
// 1 24
// 2 7
// 2 4
// 2 1
// 2 9
// 2 2
// 2 5
// 1 10
// 1 29
// 1 26
// 2 3
// 1 11
// 1 2
// 2 7
// 1 5
// 1 10
// 1 14
// 2 9
// 2 9
// 2 5
// 1 13
// 2 1
// 1 7
// 1 17
// 1 17
// 2 0
// 1 21
// 1 23
// 2 4
// 1 0
// 1 0
// 1 8
// 2 3
// 1 1
// 2 1
// 1 16
// 1 9
// 1 25
// 2 3
// 2 9
// 1 28
// 1 20
// 1 26
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
    int m;
    cin >> m;

    vector<pair<int, int>> v(m);
    for (int i = 0; i < m;i++){
        cin >> v[i].first >> v[i].second;
    }

    
    vector<int> arr(30, 0);

    for (int i = 0; i < m;i++){
        if(v[i].first==1){
            arr[v[i].second]++;
        }
        else{
            int num = v[i].second;
            for (int j = 29; j >= 0;j--){
                if(arr[j]!=0){
                  int div = (int)pow(2, j);
                  int qu = num / div;
                  int rem = num % div;
                  if(arr[j]>=qu){
                    num=rem;
                  }
                  else{
                      num -= arr[j] * div;
                  }
                }
            }
            if(num==0){
                YES;
            }
            else{
                NO;
            }
        }
    }
}
// 2 2 5
// 4 5 2 2 5

int main()
{

    // int t;
    // cin >> t;
    // while (t--)
    // {
        solve();
    // }
}