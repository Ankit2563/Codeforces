#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define vpi vector<pair<long long,long long>>
#define vint vector<int>
#define all(v) v.begin(), v.end()
#define MOD 1000000007
#define MOD2 998244353
#define MX 1000000000
#define MXL 1000000000000000000
#define PI (ld)2*acos(0.0)
#define pb push_back
#define sc second
#define fr first
#define endl '\n'
#define ld long double
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
void input(int i,int n,vector<int>&a){
    for (int k = i; k <n;k++){
        cin >> a[k];
    }
    return;
}

 
void solve(){
    int n;
    cin >> n;
    vector<int> a(n-1);
    vector<int> b(n);
    n--;
    input(0, n, a);
    for (int i = 0; i < n;i++){
        b[i] = a[i];
    }

      for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] > a[i + 1])
            {
                b[i] = a[i + 1];
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            b[i + 1] = b[i];
        }
        if(a[0]>a[1]){
            b[0] = a[0];
        }
        else{
            b[0] = 0;
        }
        for (int i = 0; i < n + 1;i++){
            cout << b[i] << " ";
        }
        cout << endl;
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
 
        solve();
  }
}