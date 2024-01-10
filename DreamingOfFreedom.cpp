
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

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
void printDivisors(int n,vector<int>&f)
{
    
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
           
            if (n / i == i)
                f.push_back(i);

            else{
                f.push_back(i);
              f.push_back(n / i);
             }
        }
    }
}

void solve()
{
    int n,m;
    cin >> n>>m;
    bool nPrime = isPrime(n);
    vi factors;

    printDivisors(n,factors);
    if (n == 1)
    {
        YES;
        return;
     }
     if(m==1){
         YES;
         return;
     }
     if(m>n){
         NO;
         return;
     }
   else  if(m==n){
         NO;
         return;
     }
     else{
         if(nPrime==true){
             YES;
             return;
         }
         for (int i = 0; i < factors.size();i++){
            if(factors[i]<=m&&factors[i]!=1){
                NO;
                return;
            }
         }
         YES;
         return;
     }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        solve();
    }
    // solve();
}
