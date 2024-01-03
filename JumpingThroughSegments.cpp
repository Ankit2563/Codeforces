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

void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i].first >> v[i].second;
    }

    
  
    int left =0, right = 1e9,mid;
    while(left<=right){
        mid = left + (right - left) / 2;
        int currLeft = 0;
        int currRight = 0;


        int i = 0;
        int temp = true;
        for ( i; i < n; i++)
        {
            currLeft -= mid;
            currRight += mid;
            int x1 = v[i].first, y1 = v[i].second;
            if(currLeft<x1){
                currLeft = x1;
            }
            if(currRight>y1){
                currRight = y1;
            }

            if(currLeft>currRight){
                temp = false;
            }
             
        }
        if(temp==false){
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout << left<< endl;
}
// 2 2 5
// 4 5 2 2 5
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}