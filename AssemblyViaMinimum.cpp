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
    int m = ((n - 1) * (n)) / 2;
    vi a(m);
    input(0, m, a);
    for (int i = 0; i < n - 1;i++){
        
    }
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}