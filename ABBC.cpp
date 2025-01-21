#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
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
void inputl(int i, int n, vector<long long> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}
void inputi(int i, int n, vector<int> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    
   
  
    vi b;
    int len = 0;
    for (int i = 0; i < n;i++){
        if(s[i]=='A'){
            len++;
        }
        else{
            if(len!=0){
                b.push_back(len);
                
            }
            len = 0;
        }
    }
    if(len!=0)
        b.push_back(len);
    sort(b.begin(), b.end());
    bool all = (s[0] == 'B' || s[n - 1] == 'B');
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1] && s[i] == 'B')
        {
            all = true;
        }
    }
    int cnt = 0;
    if(b.size()==0){
        cout << 0 << endl;
        return;
    }
    if(all==true){
        cnt += b[0];
    }
    
    for (int i = 1; i < b.size();i++){
        cnt += b[i];
    }
    cout << cnt << endl;
}

int main()
{

    int t;
    cin >> t;
    while(t--)
    solve();
}