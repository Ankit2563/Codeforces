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
    if(n%2==0){
        cout << n / 2 << " " << n / 2 << endl;
    }
    else{
        int lastdigit = n % 10;
        if(lastdigit!=9){
             cout <<( n-1 )/ 2 << " " << (n -1)/ 2 +1<< endl;
        }
        else{
             int digit = n;
             
             digit /= 10;

             int seclastdigit = digit % 10;
             if(n<20){
                  cout <<( n-1 )/ 2 << " " << (n -1)/ 2 +1<< endl;
                  return;
             }
             if(seclastdigit%2==0){
                cout <<( n-1 )/ 2 << " " << (n -1)/ 2 +1<< endl;
             }
             else{
                cout <<( n-1-10 )/ 2 +10<< " " << (n -1-10)/ 2 +1<< endl;
             }
        }
    }
}
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
 
        solve();
  }
}