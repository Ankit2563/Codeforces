#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#define vpi vector<pair<long long, long long>>
#define vint vector<int>
#define all(v) v.begin(), v.end()
#define MOD 1000000007
#define MOD2 998244353
#define MX 1000000000
#define MXL 1000000000000000000
#define PI (ld)2 * acos(0.0)
#define pb push_back
#define sc second
#define fr first
#define endl '\n'
#define ld long double
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
void input(int i, int n, vector<int> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}

void solve()
{
    string s,l,r;
    cin >> s;
    int m;
    cin >> m;
     
    cin >> l;
    cin >> r;
    unordered_map<int,vector<int>> mp;
    for (int i = 0; i <s.size();i++){
        mp[(s[i] - '0')].push_back(i);
    }
    vector<int>index;
    for (int i = 0; i < m;i++){
        int low = l[i] - '0';
        int up  = r[i] - '0';
        int minIndex = -1;
        for (int j = low; j <= up;j++){
             if(i==0){
                 if(mp[j].size()>0){
                     minIndex = max(mp[j][0], minIndex);
                 }
                 else{
                     YES;
                     return;
                 }
             }
             else{
                if(mp[j].size()==0){
                    YES;
                    return;
                }
                 int index1 = lower_bound(mp[j].begin(), mp[j].end(), index[index.size()-1]+1) - mp[j].begin();
                 if(index1>=mp[j].size()){
                     YES;
                     return;
                 }
                 else{

                        
                        
                       minIndex = max(mp[j][index1], minIndex);
                   
                 }

             }
        }
        if(minIndex==-1){
            YES;
            return;
        }
        else{
            index.push_back(minIndex);
        }

    }
    NO;
    return;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
}