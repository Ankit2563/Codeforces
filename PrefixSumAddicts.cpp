// 3 2
// 5 5
// 2 1
// 3
// 2 1
// 2
// 4 2
// 5 1
// 2 1
// 3
// 3 3
// 2 1 0
// 4 2
// 1 3
// 2 2
// 0 4
// 1 1
// 0
// 4 2
// 3 1
// 3 3
// 1 1 0
// 2 1
// 0
// 4 4
// 0 0 0 5
// 3 1
// 0
// 4 3
// 5 3 2
// 2 2
// 1 5
// 1 1
// 5
// 1 1
// 3
// 2 1
// 3
// 3 3
// 0 3 4
// 1 1
// 1
// 1 1
// 5
// 1 1
// 4
// 2 1
// 4
// 1 1
// 4
// 1 1
// 5
// 4 3
// 4 3 3
// 4 4
// 4 3 4 2
// 2 1
// 1
// 1 1
// 0
// 2 1
// 4
// 2 2
// 4 3
// 3 3
// 2 1 5
// 2 2
// 0 1
// 3 2
// 0 2
// 3 3
// 5 0 1
// 3 3
// 0 3 5
// 2 1
// 2
// 3 2
// 0 0
// 2 2
// 0 1
// 1 1
// 0
// 1 1
// 0
// 4 4
// 3 0 5 4
// 3 3
// 3 5 1
// 4 2
// 1 0
// 1 1
// 1
// 4 2
// 4 3
// 3 3
// 0 4 1
// 1 1
// 2
// 4 3
// 2 1 2
// 3 2
// 4 2
// 1 1

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

string distribute(int f,int s,int n){
    int sum = 0;
    s--;
    for (int i = 0; i < n;i++){
        sum += s;
        s--;
    }
    
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    inputi(0, k, a);
    if (n == 1)
    {
        YES;
        return;
     }
     if(k==1){
        YES;
        return;
     }
     vi b;
     int prev;
     for (int i = k - 1; i >= 1;i--){
         if(i!=k-1){
            if(prev<a[i]-a[i-1]){
                NO;
                return;
            }
         }
        b.push_back(a[i] - a[i - 1]);
        prev = a[i] - a[i - 1];
        if(i==k-1){
            prev = a[i] - a[i - 1];
        }

     }
     
     reverse(b.begin(), b.end());
     int rem = n - k + 1;

     int second = b[0];
     int first = a[0];
     if(second>=0){
     if(first>second){
        if((ll)rem*(ll)(second)<(ll)first){
            NO;
            return;
        }
        else{
            YES;
            return;
        }
     }
     else{
        YES;
        return;
     }
  }
  else{
   ll maxi = (ll)(rem) * (ll)(second);
     if((ll)first>maxi){
        NO;
        return;
     }
     else{
        YES;
     }
  }

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