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


void input(int i,int n,vector<long long>&a){
    for (int k = i; k <n;k++){
        cin >> a[k];
    }
    return;
} 

 
void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> b;
    if(n>m){
        NO;
        return;
    }
    if(n==1){
        YES;
        cout << m << endl;
        return;
    }
    if(n%2==0&&m%2==1){
        NO;
        return;
    }
    else if(n%2==0&&m%2==0){
      for (int i = 0; i < n - 2;i++){
          b.push_back(1);
      }
      b.push_back((m - (n - 2)) / 2);
      b.push_back((m - (n - 2)) / 2);
    }
    else if(n%2==1){
    for (int i = 0; i < n - 1;i++){
          b.push_back(1);
      }
      b.push_back((m - (n - 1)) );
    }
    YES;

    for (int i = 0; i < b.size();i++){
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