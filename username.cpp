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
    string s;
    cin >> s;
    string str;
    int lastCharIndex = -1;
    for (int i = 0; i < s.size();i++){
         if(s[i]>='a'&&s[i]<='z'){
             lastCharIndex = i;
         }
    }
    lastCharIndex++;
    while(lastCharIndex<s.size()&&s[lastCharIndex]=='0'){
        lastCharIndex++;
    }
    for (int i = 0; i < lastCharIndex;i++){
        str.push_back(s[i]);
    }
    cout << str << endl;
}
// 2 2 5
// 4 5 2 2 5

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}