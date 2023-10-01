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
    int n, d, h;
    cin >> n >> d >> h;
    vi a(n);
    input(0, n, a);
    double ans = 0,init=0;
    double d1 = (double)d, h1 = (double)h;
    ans += 0.5 * d1 * h1;
    init = ans;
    for (int i = n - 2; i >= 0;i--){
        
        if(h1+a[i]<a[i+1]){
            ans += init;
        }
        else{
            double diff_hei = h1-(double)(a[i + 1] - a[i]);
            double d2 = ((diff_hei)*d1) / h1;
            ans += init - 0.5 * (diff_hei * d2);
        }

    }

    cout << fixed << setprecision(6) << ans << endl;
   // cout  << ans << endl;
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}