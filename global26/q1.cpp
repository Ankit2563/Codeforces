#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<long long, long long>>
#define vint vector<int>
#define all(a) a.begin(), a.end()
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
long long getNo(vi &a)
{
    ll no = 0;
    for (int i = 0; i < 64; i++)
    {
        no += (1LL << i) * a[i]; // Using bit manipulation to set the ith bit
    }
    return no;
}

void solve()
{

    long long n;
    cin >> n;
    
    string str = to_string(n);

    if(n<100){
        if(n<=18){
            YES;
            return;
        }
        else{
            NO;
            return;
        }
    }
    string str2;
    str2.push_back(str[0]);
    str2.push_back(str[1]);
    int temp = 1;
    if(stoi(str2)>19){
        temp = 0;
       
    }
    else{
        for (int i = 0; i < str.size()-1; i++)
        {
            temp &= (str[i] != '0');
        }
        temp &= (str[str.size() - 1] != '9');
    }
       

    if(temp==0){
        NO;
        return;
    }
    else{
        YES;
        return;
    }
   
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}