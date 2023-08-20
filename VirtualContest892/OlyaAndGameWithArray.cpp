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
    
    vector<vector<int>> v;
    for (int i = 0; i < n;i++){

        int size;
        cin >> size;
        vector<int> temp(size);
        for (int j = 0; j < size;j++){
            cin >> temp[j];
        }
        sort(temp.begin(), temp.end());
        v.push_back({temp[1],temp[0]});
          
      
    }
       sort(v.begin(), v.end());
       long long sum = 0;
        int mini = v[0][1];
        for (int i = 1; i < v.size();i++){
            mini = min(mini, v[i][1]);
            sum +=(long long) v[i][0];
        }
        cout << sum +(long long) mini << endl;
        return;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }    
}


