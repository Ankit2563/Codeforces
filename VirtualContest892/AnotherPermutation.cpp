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


// all prime factor
// void primeFactors(int n,map<ll,int>&m) 
// { 
//     while (n % 2 == 0) 
//     {
//         m[2]++;
//         n = n/2; 
//     } 

//     for (int i = 3; i <= sqrt(n); i = i + 2) 
//     { 
        
//         while (n % i == 0) 
//         {
//             m[i]++;
//             n = n/i;
//       }
//        } if (n > 2)
//       m[n]++;
      
// } 
    //  void find( long long n,vector<long long>&v){
    // for (long long i = 1; i * i <= sqrt(n);i++){
    //     if(n%i==0){
    //       if(n/i==i){
    //           v.push_back(i);
    //       }
    //       else{
    //           v.push_back(i);
    //           v.push_back(n/i);
    //       }
    //       }

    // }
    // }


long long find(int n,int send){
    int m = send ;

    vector<int> v;
    if(n==2){
        
        return 2;
    }
    else if(n==3){
       
        return 7;
    }
    for (int i = 1; i < n - m;i++){
        v.push_back(i);
    }
    int val = v[v.size() - 1];
    for (int i = n; i>val;i--){
        v.push_back(i);
    }
    long long sum = 0,maxi=0;
    for (int i = 1; i <=v.size();i++){
        maxi = max(maxi, (long long)v[i - 1] * (long long)i);
        sum += (long long)v[i - 1] * (long long)i;
    }
    return sum - maxi;
  }
void solve(){
    int n;
    cin >> n;

    int m = (sqrt(n));

    vector<int> v;
    if(n==2){
        cout << 2 << endl;
        return;
    }
    else if(n==3){
        cout <<7<< endl;
        return;
    }
    long long ans = 0;
    for (int i = 1; i < n-1;i++){
        ans = max(ans, find(n, i));
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


