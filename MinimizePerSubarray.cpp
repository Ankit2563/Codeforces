
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
    if(n<=2){
        cout << 1 << " " << 1 << endl;
    }
    int oneIn, twoIn, lastIn,maxi=0;
    for (int i = 0; i < n;i++){
        if(a[i]==1){
            oneIn = i;
        }
        else if(a[i]==2){
            twoIn = i;
        }
       if(a[i]>maxi){
         lastIn = i;
         maxi = a[i];
       }
       
  }
     if(oneIn==0){
         cout << 2 << " " << lastIn + 1 << endl;
       }
       else if(oneIn==n-1){

         cout << n - 1 << " " << lastIn + 1 << endl;
       }
       else{
        if(twoIn>oneIn){
            if(twoIn-oneIn==1){
                if(lastIn>oneIn){
                    cout << twoIn + 1 << " " << lastIn + 1 << endl;
                }
                else{
                    cout << oneIn + 1 << " " << lastIn + 1 << endl;
                }
            }
            else{
                 cout << oneIn+2  << " " << lastIn + 1 << endl; 
            }

        }
        else{
           if(oneIn-twoIn==1){
                   if(lastIn<oneIn){
                    cout << twoIn + 1 << " " << lastIn + 1 << endl;
                }
                else{
                    cout << oneIn + 1 << " " << lastIn + 1 << endl;
                } 
           } 
           else{
               cout << oneIn << " " << lastIn + 1 << endl; 


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