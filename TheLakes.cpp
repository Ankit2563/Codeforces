
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
int Volume(int x,int y,vector<vector<int>>&matrix,int n,int m){
         if(x<0||y<0||x>=n||y>=m){
           return 0;
         }
        if(matrix[x][y]<=0){
           return 0;
        }
         int value = matrix[x][y];
         matrix[x][y] = 0;
         int first  =  Volume(x , y+1, matrix, n, m);
         int second =  Volume(x+1, y, matrix, n, m);
         int third  =  Volume(x, y-1, matrix, n, m);
         int fourth =  Volume(x-1, y, matrix, n, m);

         return value + first + second + third + fourth;
}
 
void solve(){
    int n,m;
    cin >> n>>m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> matrix[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
           
                ans = max(ans, Volume(i, j, matrix, n, m));
           

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