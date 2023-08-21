
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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    input( 0, n,a);
    sort(a.begin(), a.end());
    ll arr[n];
    arr[0] = a[0];
    for (int i = 1; i < n;i++){
        arr[i] = arr[i - 1] + a[i];
    }
    ll ans = 0;
    for (int i = 0; i < k;i++){
        ll value,value2;
        if(i!=0){
        value = arr[n - k + i-1] - arr[2 * i-1];
        value2 = arr[n -i-1] - arr[2*k-2*i-1];
        }
        else{
         value = arr[n - k + i-1];  
         value2 = arr[n - i-1]-arr[2*k-2*i-1];  
        }
        ans = max(value, ans);
        ans = max(value2, ans);
}
    cout << ans << endl;
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
 
        solve();
  }
}