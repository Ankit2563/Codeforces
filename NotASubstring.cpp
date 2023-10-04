
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
    if (s == "()" ||s=="("||s==")")
    {
        NO;
        return;
    }
    else
    {
        YES;
        int n = s.size();
        string req;
        for (int i = 0; i < n; i++)
        {
            req.push_back('(');
        }
        for (int i = 0; i < n; i++)
        {
            req.push_back(')');
        }
        bool isFound = req.find(s) != string::npos;
        if (isFound){
            string sec;
            for (int i = 0; i < n;i++){
                sec.push_back('(');
                sec.push_back(')');
            }
            cout << sec << endl;
        }
        else{
            cout << req << endl;
        }
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