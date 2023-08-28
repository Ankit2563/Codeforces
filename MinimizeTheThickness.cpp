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
    int n;
    cin >> n;
    vi a(n);
    input(0, n, a);
    vector<ll> prf(n);
    map<ll, int> m;
    prf[0] = a[0];
    m[prf[0]] = 1;
    for (int i = 1; i < n;i++){
        prf[i] = prf[i - 1] + a[i];
        m[prf[i]] = i + 1;
    }
    int ans = n;
    for (int i = 0; i < n-1;i++){
        int idx = m[prf[i]];
        int no = prf[i];
        int prevIndex;
        int k = 2;
        int mini = idx;
        while(idx<n){
           if(m[k*no]){
               prevIndex = m[(k-1)*no];
               idx = m[k * no];
               mini = max(abs(idx - prevIndex), mini);
               k++;
           }
           else{
               break;
           }
        }
        if(idx==n){
           ans = min(ans, mini);
        }
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