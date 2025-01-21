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

void solve(string c,string f,int n)
{
    
    int m = f.size();
    for (int i = 1; i < m;i++){
        if(c[i-1]!=f[i-1]&&i>n){
            cout << "No" << endl;
            return;
        }
    }
    for (int i = 0; i < n;i++){
         if(f[i]==c[i])
             continue;
         else if(f[i]>c[i]){
             if(c[i]-f[i]>n){
                 cout << "No" << endl;
                 return;
             }
         }
         else{
            if('z'-c[i]+f[i]-'a'+1>n){
                cout << "No" << endl;
                return;
            }
         }
    }
        cout << "Yes" << endl;
}

int main()
{

    string c, f;
    cin >> c >> f;
    int n;
    cin >> n;
    solve(c, f, n);
}