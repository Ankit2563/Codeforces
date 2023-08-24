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
    string str;
    cin >> str;
    int maxNo=0;
    int n = str.size();
    for (int i = 0; i < n;i++){
        int count = 0;
        while(i<n&&str[i]=='1'){
            count++;
            i++;
        }
        if(count>0){
            maxNo = max(count, maxNo);
        }
    }
    int i = 0,j=n-1;
    while(i<n&&str[i]=='1'){
        i++;
    }
    int count2 = 0;
    while(j>=0&&str[j]=='1'){
        count2++;
        j--;
    }
    if(i<=j)
    maxNo = max(i+count2, maxNo);
    else{
    maxNo = max(count2, maxNo);
    }
    if(maxNo==n){
    cout << (ll)maxNo *(ll) maxNo << endl;
    }
    else{
    ll ans = 0;

    for (int i = 0; i < maxNo;i++){
            ans = max(ans, (ll)(maxNo - i)*(i + 1));
    }
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