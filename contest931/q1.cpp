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
    int n;
    cin >> n;
    int no = n;
    ll cnt = 0;

    queue<pair<int, int>> q;
    q.push({n, 0});
    int mini =INT_MAX;
    while(!q.empty()){
        int no1 = q.front().first;
        int cnt1 = q.front().second;
        q.pop();
        if(no1==0){
            mini = min(mini, cnt1);
            // cout << mini<< endl;
            // return;
        }
        if(no1>=15){
             int rem1 = no1 % 15;
            int cn1 = no1 / 15;
            for (int i = 0; i <2&&i<cn1;i++){
             q.push({rem1+i*15, cnt1 + cn1-i});
           
            }
            
        }
        if(no1>=10){
             int rem1 = no1 % 10;
            int cn1 = no1 / 10;
            for (int i = 0; i < 2 && i < cn1; i++)
            {
                q.push({rem1 + i * 10, cnt1 + cn1 - i});
            }
        }
        if(no1>=6){
             int rem1 = no1 % 6;
            int cn1 = no1 / 6;
            for (int i = 0; i < 2&&i<cn1; i++)
            {
                q.push({rem1 + i * 6, cnt1 + cn1 - i});
            }
        }
        if(no1>=3){
             int rem1 = no1 % 3;
            int cn1 = no1 / 3;
            for (int i = 0; i< 2 && i < cn1; i++)
            {
                q.push({rem1 + i * 3, cnt1 + cn1 - i});
            }
        }
        if(no1>=1){
             int rem1 = no1 % 1;
            int cn1 = no1 / 1;
            for (int i = 0; i < 2 && i < cn1; i++)
            {
                q.push({rem1 + i * 1, cnt1 + cn1 - i});
            }
        }
       
    }
    cout << mini << endl;

    // }
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