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
    set<int> s;

    vector<pair<int, int>> ans;
    vector<pair<int, int>> p;

    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);

        p.push_back({a[i], i+1});
    }
    if (s.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (s.count(1))
    {
        cout << -1 << endl;
        return;
    }
    sort(p.begin(), p.end());
    while(p[n-1].first!=p[0].first)
    {
       
            int devide=p[n-1].first;
            while (p[n - 1].first > p[0].first)
            {
                devide = p[n - 1].first;
                ans.push_back({p[n - 1].second, p[0].second});
                if((devide%p[0].first)==0){
                    p[n - 1].first = (devide / p[0].first);
                }
                else{
                    p[n - 1].first = ((devide / p[0].first)+1);
                }
                
            }
              sort(p.begin(), p.end());
        
    }
    cout << ans.size() << endl;
    
    for (int i = 0; i < ans.size(); i++)
    {
            cout << ans[i].first << " " << ans[i].second << endl;
    }
    
   
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