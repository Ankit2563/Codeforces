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
    vi a(n);
    input(0, n, a);
    int i = n - 2;
    map<int, int> m;
    while(i>=0&&a[i]<=a[i+1]){
        m[a[i+1]] = i+1;
        i--;
    }
    
        if (i == -1)
        {
            cout << 0 << endl;
            return;
        }
        for (int k = i + 1; k> n;k++){
            m[a[k]] = k;
        }
            set<int> s1, s2;
        int index = -1;
        for (int k = i; k >= 0; k--)
        {
            if (m[a[k]])
            {
                index = max(index,m[a[k]]);
                
            }
            s1.insert(a[k]);
    }
    if(index!=-1){
          for (int i = index; i >= 0;i--){
              s2.insert(a[i]);
          }
    }
 
    cout << max(s1.size(), s2.size()) << endl;
    return;
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}