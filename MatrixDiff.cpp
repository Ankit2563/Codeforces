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
    vector<vector<int>> matrix(n, vector<int>(n,0));
    vector<int> v(n * n, 0);
    

    int s = 1;
    set<int> st;
        int b = n*n;
        for (int i = 0; i < n*n;i++){
           if(i%2==0){
               v[i] = b--;
           }
           else
               v[i] = s++;
             
        }
        int index = 0;
        for (int i = 0; i < n;i++){
           for (int j = 0; j < n;j++){
              if(i%2==0){
                  matrix[i][j] = v[index++];
              }
              else{
                  matrix[i][n - j - 1] = v[index++];
              }
           }
        }
        for (int i = 0; i < n;i++){
           for (int j = 0; j < n;j++){
              cout << matrix[i][j] << " ";
           }
           cout << endl;
        }
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
 
        solve();
  }
}