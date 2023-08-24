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
    vector<int> a(n);
    input(0, n, a);
    pair<int,int> prf[n];
    prf[n - 1] = {0,0};
  
    int ans = 0;
    for (int i =n-1; i >=0;i--){
         if(a[i]==0){
             prf[i] = {prf[i + 1].first+ 1,ans};
         }
       
         if(a[i]==1){
             prf[i].first = prf[i + 1].first;
             ans += prf[i].first;
             prf[i].second = ans;
         }
    }
    int maxi = ans;
    int one = 0;
    for (int i = 0; i < n;i++){
        if(a[i]==0){
             maxi = max(prf[0].first-one+prf[i].first-1,maxi);
        }
        else{
             maxi = max(prf[0].second + one - prf[i].first, maxi);
             one++;
        }
    }
    if(maxi==0){
        cout << n - 1 << endl;
        return;
    }
    cout << maxi << endl;
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
 
        solve();
  }
}