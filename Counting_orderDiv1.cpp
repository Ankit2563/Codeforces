// You are given two arrays a
//  and b
//  each consisting of n
//  integers. All elements of a
//  are pairwise distinct.

// Find the number of ways to reorder a
//  such that ai>bi
//  for all 1≤i≤n
// , modulo 109+7
// .

// Two ways of reordering are considered different if the resulting arrays are different.

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// take input
void input(vector<int>&a,int i,int n){
    for (int k = i; k <n;k++){
        cin >> a[k];
    }
    return;
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    input(a, 0, n);
    input(b, 0, n);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int init = 0;
    ll ans = 1;
    for (int i = n-1; i >=0;i--){
      int index= upper_bound(a.begin(), a.end(), b[i])-a.begin();
      if(n-index -init>0){
          ans = ans%1000000007*(n - index - init)%1000000007;
          init++;
      }
      else{
          cout << 0 << endl;
          return;
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


