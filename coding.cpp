#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int> v; 
    while(n){
        v.push_back(n % 10);
        n /= 10;
    }
    reverse(v.begin(), v.end());
    vector<int> v1 , v2 ;
    int swit = 1; 
    for (int i = 0; i < v.size();i++){
        int p = v[i] / 2;
        if(v[i]%2==0){
            v1.push_back(p);
            v2.push_back(p);
        }
        else{
            if(swit==1){
             v1.push_back(p);
             v2.push_back(p+1);
             swit = 0 ;
            }
            else if(swit==0){
            v1.push_back(p+1);
            v2.push_back(p);
            swit = 1 ;
            
        }
            
        }
        
    }
    //reverse(v1.begin(), v1.end());
   // reverse(v2.begin(), v2.end());

    long long num1 = 0,num2=0;
    int k = 0;
    for (int i=v1.size()-1;i>=0;i--){
        num1 += v1[i] * pow(10, k++);
    }
     k = 0;
    for (int i=v2.size()-1;i>=0;i--){
        num2 += v2[i] * pow(10, k++);
    }
    cout << num1 << " " << num2 << endl;
}


int main()
{

    int t ;
    cin >> t; 
    while(t--){
        solve();
    }

    return 0;
}