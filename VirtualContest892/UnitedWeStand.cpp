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


    
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    input(a, 0, n);
    vector<int> b, c;
    sort(a.begin(), a.end());

    int j = n - 1;
    int last = a[j];
    while(j>=0&&a[j]==last){
        j--;
    }
    if(j==-1){
        cout << -1 << endl;
        return;
    }

    cout << j+1 << " " << n-(j+1)<< endl;
    for (int i = 0; i <=j;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = j + 1; i < n;i++){
        cout << a[i] << " ";
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


