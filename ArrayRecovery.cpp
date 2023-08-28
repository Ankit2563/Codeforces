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
    vi b(n);
    input(0, n, b);
    vi a(n);
    a[0] = b[0];
    for (int i = 1; i < n;i++){
        int target = b[i];
        int f = b[i]+a[i - 1];
        if(b[i]<a[i-1]&&b[i]!=0){
            cout << -1 << endl;
            return;
        }
        else{
            a[i] = f;
        }
        if(-b[i]+a[i-1]>=0&&b[i]!=0&&a[i-1]!=0){
            cout << -1 << endl;
            return;
        }
        
        
    }
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
// 3
// 3 5 8
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}