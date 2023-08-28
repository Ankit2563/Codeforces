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
    vi b;
    map<int, int> m;
    for (int i = 0; i < n;i++){
        if(m[a[i]]==0){
            b.push_back(a[i]);
        }
        m[a[i]] = i + 1;
    }
    int ans = 0;
    for (int i = b.size() - 1; i >= 0;i--){
            if(b[i]==1){
            ans = max(ans, 2 * m[1]);
            }
        for (int j = i-1; j >= 0;j--){
            if(__gcd(b[i],b[j])==1){
                ans = max(m[b[i]] + m[b[j]], ans);
            }
        }
    }
    if(ans==0){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
 
        solve();
  }
}