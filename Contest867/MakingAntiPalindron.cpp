#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n%2==1){
        cout << -1 << endl;
        return;
    }

    map<char, int> m;
    int ans = 0;
    for (int i = 0; i < n/2;i++){
        if(s[i]==s[n-1-i]){
            m[s[i]]++;
            ans++;
        }
    }
 
    for(auto i:m){
        if (m.size() == 1 && i.second == 1)
        {
            cout << 1 << endl;
            return;
        }
        if(i.second>ans/2){
            cout << -1 << endl;
            return;
        }
       
      
       
    }
    if(ans%2==0){
        cout << ans / 2 << endl;
    }
    else{
        cout << ans / 2 + 1 << endl;
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