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

void solve()
{
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
        long long sum = 0;
    for(auto it:a){
        sum += it;
    }
    sum += k;
    sort(a.begin(), a.end(), greater<long long>());

    vector<long long> b;
    int n1 = n;
    for (int i = 0; i < n;i++){
        long long eachEqual = sum / n1;
        long long rem = sum % n1;

        if (rem == 0)
        {
            if(eachEqual<a[i]){
                sum = sum - a[i];
            }
            else{
                a[i] = eachEqual;
                sum = sum - eachEqual;
            }
          
        }
        else
        {
            if (eachEqual < a[i])
            {
                sum = sum - a[i];
            }
            else
            {
                a[i] = eachEqual+1;
                sum = sum - (eachEqual+1);
            }
        }
        n1--;
    }
    long long least = a[n - 1];
    long long ans = 0;
    ans = ans + least * n - n + 1;
    long long count = 0;
    for (int i = 0; i < n;i++){
        if(a[i]>least){
            count++;
        }
    }

        cout << ans+count << endl;
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