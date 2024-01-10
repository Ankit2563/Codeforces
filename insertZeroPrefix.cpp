

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

string distribute(int f, int s, int n)
{
    int sum = 0;
    s--;
    for (int i = 0; i < n; i++)
    {
        sum += s;
        s--;
    }
}
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    inputi(0, n, a);
    if(a[n-1]==1){
        NO;
        return;
    }

    vector<pair<int,int>>v;
    for (int i = 0; i < n;i++){
      if(a[i]==1){
          int index = i;
          int cnt = 0;
          while(a[i]==1&&i<n){
              cnt++;
              i++;
          }
          i--;
          v.push_back({index, cnt});
      }
      else{
        continue;
      }
    }
    reverse(v.begin(), v.end());
    vi ans;
    int prevIndex = -1;
    for (int i = 0; i < v.size();i++){
        int count = v[i].second;
         int index = v[i].first;
         if(i==0){
             int len = n - index;
             len--;
             while(len>0){
                 ans.push_back(0);
                 len--;
             }
             ans.push_back(count);
             prevIndex = index;
         }
         else{

             int len = prevIndex - index;
             len--;
             while (len > 0)
             {
                 ans.push_back(0);
                 len--;
             }
             ans.push_back(count);
             prevIndex = index;
         }

    }
    int noZero = 0;
    int i = 0;
    while(a[i]==0&&i<n){
        i++;
        noZero++;
    }
    for (int i = 0; i < noZero;i++){
        ans.push_back(0);
    }
    YES;
    for (int i = 0; i < ans.size();i++){
        cout << ans[i] << " ";

    }
    cout << endl;

    // cout<< distribute(first, second,(n-k+1))<<endl;
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