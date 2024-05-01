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

    vector<vector<int>> ans;
    int temp = 1;
    int col = n;
    int row = n - 1;
    for (int i = 1; i <2*n;i++){
        vector<int> v;
        if(temp==1){
            v.push_back(2);
            v.push_back(col);
            col--;
            temp = 0;
        }
        else{
            v.push_back(1);
            v.push_back(row);
            row--;
            temp = 1;
        }

        for (int j = 1; j <= n;j++){
            v.push_back(j);
        }
        ans.push_back(v);
    }

   
    int ope =2*n-1;
    ll sum = 0;
    for (int i = 0; i < n;i++){
        sum += (2 * i + 1)*((i+1));
    }

        cout << sum << " " << ope << endl;
    for(auto it:ans){
        for(auto it1:it){
            cout << it1 << " ";
        }
        cout << endl;
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