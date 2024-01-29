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
    int n;
    cin >> n;
    vi a(n);
    vi b(n);
    input(0, n, a);
    input(0, n, b);
    vector < pair<int, pair<int, int>>> v;
    map < int, pair < int, int >>m;
    map<int, int> mi;

    for(int i = 0; i < n;i++){
        v.push_back({a[i], {b[i], i}});
        v.push_back({b[i], {a[i], i}});
        m[i] = {a[i], b[i]};
    }
    
    sort(v.begin(), v.end());

    int temp = true;
    for (int i = v.size() - 1; i >= 0;i--)
    {
        pair < int, pair < int, int >> it = v[i];
        int index = it.second.second;
        if(mi[index]==0){
            int x = m[index].first;
            int y = m[index].second;
            if(temp==true){
                m[index] = {--x, 0};
                temp = false;
            }
            else{
                m[index] = {0, --y};
                temp = true;
            }
            mi[index]++;
        }
    }
    long long total = 0;
    for(auto it:m){
        total+= it.second.first - it.second.second;
    }
    cout << total << endl;
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