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
    int n, l, r;
    cin >> n >> l >> r;

    vi b(n+1);
    map<int, int> m;
    int init = 1;
    for (int i = 1; i <=n;i++){
        b[i] =( (l - 1)/i+1 )*i;
        init = init && b[i] <= r;
    }
    if(init){
        YES;
        for (int i = 1; i <=n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    else{
        NO;
    }
    return;
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}