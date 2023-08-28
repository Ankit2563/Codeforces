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
    ll n;
    cin >> n;
    ll f = 0,s=0,t=0,ans;
    if((n-1)%3==0){
        f = (n - 1) / 3;
     ans = (((f * (2 * (n - 1) + 1)%MOD * (n)) )%MOD + ((n) * (n - 1)) / 2)%MOD;

    }
    else if((2 * (n - 1) + 1)%3==0){
        f = (2 * (n - 1) + 1) / 3;
        ans = ((((n - 1) * f%MOD * (n)) )%MOD + ((n) * (n - 1)) / 2)%MOD;

    }
    else if(n%3==0){
        f = n / 3;
       ans = ((((n - 1) * (2 * (n - 1) + 1)%MOD * (f)))%MOD + ((n) * (n - 1)) / 2)%MOD;

    }
    cout << ((ans +(n *(ll) n)%MOD)*2022)%MOD << endl;
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}