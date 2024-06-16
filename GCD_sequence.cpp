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

void input(int i, int n, vector<long long> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}
int funct(int s, int e, string &st)
{
    if (s > e)
    {
        return 0;
    }

    if (st[s] == st[e])
    {
        return 0 + funct(s + 1, e - 1, st);
    }
    else
    {
        return min(1 + funct(s + 1, e, st), 1 + funct(s, e - 1, st));
    }
}

bool helper(vector<int>&a){
    int n = a.size();
    vector<int> b;
    for (int i = 0; i < n - 1; i++)
    {  
        int no1 = a[i], no2 = a[i + 1];
        b.push_back(__gcd(no1, no2));
    }
    for (int i = 0; i < b.size()-1;i++){
           if(b[i]>b[i+1]){
               return false;
           }
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    input(0, n, a);
    vi b;
    for (int i = 0; i < n-1;i++){
        int no1 = a[i], no2 = a[i + 1];
        b.push_back(__gcd(no1, no2));
    }
    vector<int> vindex;
    for (int i = 0; i < b.size()-1;i++){
        if(b[i]>b[i+1]){
            vindex.push_back(i);
            vindex.push_back(i+1);
            vindex.push_back(i+2);
        }
    }
    if(vindex.size()>=100){
        NO;
        return;
    }
   
    bool temp = false;
    for (int i = 0; i < vindex.size();i++){
        int index = vindex[i];
        vector<int> v;
        for (int j = 0; j < a.size();j++){
            if(index!=j){
                v.push_back(a[j]);
                
            }
        }
        bool flag= helper(v);
        if(flag==true){
            YES;
            return;
        }
    }
    if(vindex.size()>0&&temp==false){
        NO;
        return;
    }

        YES;
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