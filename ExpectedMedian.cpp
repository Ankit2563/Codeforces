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

long long modInverse(long long a, long long mod)
{
    long long result = 1, base = a;
    long long exp = mod - 2; 
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}
vector<long long> compute_nCr(int n)
{
    vector<long long> result(n + 1, 1);

    for (int r = 1; r <= n; ++r)
    {
        result[r] = (result[r - 1] * (n - r + 1) % MOD * modInverse(r, MOD)) % MOD;
    }

    return result;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    input(0, n, a);
    ll zero = count(a.begin(), a.end(), 0);
    ll one = n - zero;
    long long ans = 0;

    vector<long long> nCr_zero = compute_nCr(zero);
    vector<long long> nCr_one = compute_nCr(one);
   ;
    
    for (int i = 0; i <= zero && i <= k; i++)
    {

        if (i >= (k - i))
        {
            break;
        }
        else
        {
            if(one<k-i)
                continue;
           
            ans = ans % MOD + ((ll)nCr_one[k - i] % MOD) * nCr_zero[i];
            ans = ans % MOD;
        }
    }
    if(one==n){
        cout<< nCr_one[k] % MOD<<endl;
    }
    else
    cout << ans << endl;
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