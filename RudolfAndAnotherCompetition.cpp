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
void inputvv(int i,int m,int n,vector<vector<long long>>&v){
    for (int k = i; k < n;k++){
        for (int j = 0; j < m;j++){
            cin >> v[k][j];
        }
    }
}

 
void solve(){
    int n, m, h;
    cin >> n >> m >> h;
    vector<vi> v(n, vi(m));
    inputvv(0, m, n, v);
    vector<pair<ll, pair<ll, ll>>> vp;
    ll pts1, penalty1;
    for (int i = 0; i < n;i++){
        sort(v[i].begin(), v[i].end());
       
        ll penalty = 0,pts=0;
        long long total = 0;
        for(auto k:v[i]){
            penalty += k;
            if(penalty<=h){
                pts++;
                
                total += penalty;
            }
            else{
                break;
            }
        }
      
        vp.push_back({pts, {total, i + 1}});
    }
    sort(vp.begin(), vp.end());
    int position = 0;
    for (int i=vp.size() - 1;i >= 0;i--){
         position++;
        if(vp[i].second.second==1){
            int index = i,index2=i,count1=0,count2=0;
            int pts_first = vp[i].first;
            while (index>=0&&vp[index].first==pts_first){
                index--;
                count1++;
            }
            while (index2<n&&vp[index2].first==pts_first){
                index2++;
                count2++;
            }
            cout<<position + (count1) - (count2)<<endl;
            return;
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