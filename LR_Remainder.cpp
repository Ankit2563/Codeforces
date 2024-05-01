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

void solve()
{
    int n, m;
    cin >> n >> m;
    vi a1(n);
    input(0, n, a1);
    vector<char> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }

    int left = 0, right = n - 1;
    vi newStore;
  
    for(int i=0;i<n;i++){
        if(a[i]=='L'){
            newStore.push_back(a1[left]);
            left++;
        }
        else{
            newStore.push_back(a1[right]);
            right--;
        }
    }
    int mult = 1;
    vi ans;
    for (int i = n-1; i >=0;i--){
        mult *= newStore[i];
        ans.push_back(mult % m);
        mult = mult % m;
    }
    reverse(all(ans));
    for (auto it : ans)
    {
        cout << it << " ";
     }
     cout << endl;
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