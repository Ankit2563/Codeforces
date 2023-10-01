#include<bits/stdc++.h>
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
    vector<int> a(n);
    input(0, n, a);

    int maxi = n, mini = 1;
    int left = 0, right = n - 1;
    while(left<right){
        if(a[left]==mini){
            mini++;
            left++;
        }
        else if(a[right]==maxi){
            maxi--;
            right--;
        }
        else if(a[left]==maxi){
            left++;
            maxi--;
        }
        else if(a[right]==mini){
            right--;
            mini++;
        }
        else{
            break;
        }
 
    }
    if(right==left){
        cout << -1 << endl;
    }
    else
        cout << left + 1 << " " << right + 1 << endl;
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