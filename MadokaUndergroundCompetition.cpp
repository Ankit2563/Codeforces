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
    int n, k, r, c;
    cin >> n >> k >> r >> c;
    vector<vector<char>> v(n, vector<char>(n, '.'));
    v[r - 1][c - 1] = 'X';
    for (int i = c - 1 + k; i < n;i+=k){
        v[r - 1][i] = 'X';
    }
    for (int i = c - 1-k; i>=0;i-=k){
        v[r - 1][i] = 'X';
    }
    for (int i = r; i < n; i++)
    {
        for (int j = 0; j < n; j ++)
        {

            v[i][j] = v[i - 1][(j + 1) % n];
        }
    }
    for (int i = r-2; i >=0; i--)
    {
        for (int j = 0; j < n; j++)
        {

            if(j==0){
                v[i][j] = v[i + 1][n - 1];
            }
            else{
                v[i][j] = v[i + 1][j - 1];
            }
        }
    }
    
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            cout << v[i][j];
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