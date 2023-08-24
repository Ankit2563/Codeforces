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
    map<int, int> m;
    for (int i = 0; i < n;i++){
        m[i + 1] = 1;
    }
    if(n==1){
        cout << 1 << endl;
        return;
    }
    else if(n==2){
        cout << 1 << " " << 2 << endl;
        return;
    }
    int i = 3;

    vector<int> ans;

    ans.push_back(1);
    ans.push_back(2);
    int s = 3;
    while(i<=n){
        int no = ans.back();
        if(m[no*2]>0){
            ans.push_back(no * 2);
            m[no * 2]--;
            
                }
        else{
           while(m[s]==0){
               s++;
           }
           ans.push_back(s);
           m[s]--;
        }
        i++;
        }
    for (int i = 0; i < n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
 
        solve();
  }
}