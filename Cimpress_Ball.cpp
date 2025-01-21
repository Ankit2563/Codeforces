#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vpi vector<pair<long long, long long>>
#define vint vector<int>
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

// Input function to read a vector
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
    int n;
    cin >> n;
    vi a(n); 
    input(0, n, a);

 
    vector<int> left(n), right(n);

    
    left[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = __gcd(left[i - 1], a[i]);
    }

    
    right[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = __gcd(right[i + 1], a[i]);
    }

    int maxi = 0;


    for (int i = 0; i < n;i++){
        if(left[i]==right[i]){
            if(i==0){
                maxi = max(right[i+1], maxi);
            }
            else if(i==n-1){
                maxi = max(left[i-1], maxi);
            }
            else{
                maxi = max(__gcd(right[i+1],left[i-1]), maxi);
            }
        }
    }
    cout << maxi * n << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
