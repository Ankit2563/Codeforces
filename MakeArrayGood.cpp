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
    vector<int> a(n);
    input(0, n, a);
    vector<pair<int, int>> v;
    for (int i = 0; i < n;i++){
        v.push_back({a[i], i});
    }
    sort(v.begin(), v.end());
    vector<pair<int, int>> ans;
     
    for (int i = 1; i < n;i++){
       
        if ((v[i].first% v[i - 1].first)!=0)
        {
           int quo = ((v[i].first) / (v[i - 1].first))+1;
             ans.push_back({v[i].second+1, (v[i-1].first)*quo - v[i].first});
            v[i].first = v[i - 1].first*quo;
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size();i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
 
        solve();
  }
}