#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vpi vector<pair<long long, long long>>
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
    vi a(n);
    input(0, n, a);
    vi v;
    map<int, int> mp;
    for (int i = 0; i < n;i++){
        if(mp[a[i]]==0){
            v.push_back(a[i]);
            mp[a[i]]++;
        }

    }
    sort(v.begin(), v.end());
    long long sum = 0;
    int storeIndex = -1;
    int n1 = v.size();
    if(v[0]==1){
        if(n1==2){
            cout << "Bob" << endl;
            return;
        }
        int cnt = 0;
        for (int i = 0; i < n1;i++){
            if(v[i]==(i+1)){
                cnt++;
            }
            else{
                storeIndex = i;
                if ((storeIndex ) % 2 == 1)
                {
                    cout << "Bob" << endl;
                    return;
                }
                break;
             }
          
        }
        if (cnt == n1)
        {
            if (cnt % 2 == 0)
            {
                cout << "Bob" << endl;
                return;
            }
        }
    }
     
    
    cout << "Alice" << endl;
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