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

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    input(0, n, a);
    sort(all(a));
    int left = a[n - 1], right = a[n - 1] + k - 1;

    for (int i = left; i <= right;i++){
        int temp = 0;
        for (int j = 0; j < n - 1;j++){
            int num =i- a[j];
            if((num/k)%2==0){
                continue;
            }
            else{
                temp = 1;
                break;
            }
        }
        if(temp==0){
            cout << i << endl;
            return;
            break;
          
        }
    }
    cout << -1 << endl;
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