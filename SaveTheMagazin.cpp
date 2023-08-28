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
    string s;
    cin >> s;
    vector<int> a(n);
    input(0, n, a);
    ll ans = 0;
    int i = 0;
    while(i<n&&s[i]=='1'){
        ans += a[i];
        i++;
    }
    if(i==n){
        cout << ans << endl;
        return;
    }
    for (int j = i+1; j < n;j++){
        
        if(s[j]=='1'){
            int mini = INT_MAX;
            int sum = 0;
            while (j < n && s[j] == '1')
            {
                sum += a[j - 1];
                mini = min(a[j - 1], mini);
                j++;
           }
           mini = min(a[j - 1], mini);
           sum += a[j - 1];
           ans += sum - mini;
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