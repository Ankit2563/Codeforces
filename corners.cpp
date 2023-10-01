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
    int n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    int two = 0, one = 0,o=0,tri;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            if(v[i][j]=='1'){
                o++;
            }
           if(v[i][j]=='0'){
               one++;
           }
           if((j+1<m&&v[i][j]=='0'&&v[i][j+1]=='0')||(i+1<n&&(v[i][j]=='0'&&v[i+1][j]=='0'))||(i+1<n&&j+1<m&&(v[i+1][j+1]=='0'&&v[i][j]=='0'))||(i+1<n&&j-1>=0&&(v[i][j]=='0'&&v[i+1][j-1]=='0'))){
               two++;
           }
        }
    }
    if(two>0){
        cout << o << endl;
    }
    else if(one>0){
        cout << o - 1 << endl;
    }
    else{
        cout << o - 2 << endl;
    }

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