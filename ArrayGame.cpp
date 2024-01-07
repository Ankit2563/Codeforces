
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
    int n,k;
    cin >> n>>k;
    vector<long long> a(n);
    input(0, n, a);
    if(k>=3){
        cout <<0<< endl;
        return;
    }
    sort(a.begin(), a.end());
    vector<long long> diff;
    long long mini = a[0];
    for (int i = 0; i < n;i++){
       
        for (int j = i + 1; j < n;j++){
            diff.push_back(a[j] - a[i]);  
        }
    }
    sort(diff.begin(), diff.end());
     if(mini>diff[0]){
         mini = diff[0];
     }
     if(k==1){
         cout << mini << endl;
         return;
     }
     
     for (int i = 0; i < diff.size();i++){
         long long val = diff[i];
         int index1 = lower_bound(a.begin(), a.end(), val) - a.begin();
        
         if(index1>=0&&index1<n){
             if (mini > abs(val-a[index1]))
             {
                 mini = abs(val - a[index1]);
             }
             
         }
         if(index1+1>=0&&index1+1<n){
             if (mini > abs(val-a[index1+1]))
             {
                 mini = abs(val - a[index1+1]);
             }
             
         }
         if(index1-1>=0&&index1-1<n){
             if (mini > abs(val-a[index1-1]))
             {
                 mini = abs(val - a[index1-1]);
             }
             
         }
 
     }

         cout << mini << endl;
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
