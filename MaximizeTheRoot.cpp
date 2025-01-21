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
int dfs(int src, vector<int> *adj,vector<int>&a){
  
    int val = INT_MAX;
    int temp = 0;
    for(auto it:adj[src]){
      val= min(val, dfs(it, adj, a));
      temp = 1;
    }
    if(src==0){
       if(temp==1){
           return a[src] + val;
       }
       else{
           return a[src];
       }
    }
    if(temp==1){
        if(a[src]<val){
           return a[src] =a[src]+(val - a[src]) / 2;
        }
        else{
            return val;
        }
    }
    else{
        return a[src];
    }
}
struct Node
{
    int key;
    struct Node *left, *right;
};



void solve()
{
    int n;
    cin >> n;
    vi a(n);
    input(0, n, a);
    vi b(n - 1);
    input(0, n - 1, b);
    vector<int> adj[n];
    for (int i = 0; i < n - 1; i++)
    {
        adj[b[i]-1].push_back(i + 1);
    }
    cout <<dfs(0, adj,a) << endl;
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