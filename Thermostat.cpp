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
    int l, r, x;
    cin >> l >> r >> x;
    int a, b;
    cin >> a >> b;
    if(a>b){
        swap(a, b);
    }
    if (a == b)
        cout << 0 << endl;
    else if (b - a >= x)
        cout << 1 << endl;
    else if ((a - l >= x && b - l >= x) || (r - a >= x && r - b >= x))
        cout << 2 << endl;
    else if ((a + x <= r && a + x - l >= x && b - l >= x)
    ||
            (a - x <= l && r - a - x >= x && r - b >= x))
        cout << 3 << endl;
    else
        cout << -1 << endl;
        
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
 
        solve();
  }
}