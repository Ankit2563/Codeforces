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
    int n, k;
    cin >> n >> k;
    int temp = 0;
    int no1 = n;
    int dev;
    if(n%k==0){
        dev = n / k;
    }
    else{
        dev = n / k + 1;
    }

    int inc = 0;
    int index = 0;
    vector<int> ans(n, 0);
    int no = 1;
    int cnt = 0;
    for (int i = 0; i < 2*n; i++)
    {
        if(no==(no1+1))
            break;

        if (temp == 0)
        {
            int newIndex = index*k+inc;
            index++;
           
            if(newIndex<n)
            ans[newIndex] = no++;
            cnt++;
            if(cnt==(dev)||newIndex>=n){
                cnt = 0;
                temp = 1;
                index = 0;
                inc++;
            }
           
        }
        else
        {
            int newIndex = (dev-index-1) * k + inc;
            index++;
            if(newIndex<n&&newIndex>=0){
            ans[newIndex] = no++;
            }
            cnt++;
            if (cnt == (dev)||newIndex<0)
            {
                cnt = 0;
                temp = 0;
                index = 0;
                inc++;
            }
            
        }

    }
    for(auto it:ans){
        cout << it << " ";
    }
    cout << endl;
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