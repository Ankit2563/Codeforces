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
void print(vector<int>&nums){
    for (int i = 0; i < nums.size();i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    input(0, n, a);
    int mini = INT_MAX;
    int maxi = INT_MIN;

    int index = -1;
    for (int i = 0; i < n;i++){
        mini = min(a[i], mini);
        maxi = max(a[i], maxi);
        if(a[i]==maxi){
            index = i;
        }
    }
    if(maxi==mini){
        cout << 0 << endl;
        return;
    }
    vector<pair<int, int>> op;
    if(maxi<=0){
        int sum = a[n - 1];
        for (int i = n - 2; i >= 0;i--){
            a[i] = a[i] + sum;
            op.push_back({i+1, i+2});
            sum = a[i];
        }
        
        }
    else{
        int maxi2 = maxi;
        
        while(maxi2<=20){
            maxi2 += maxi2;
            op.push_back({index+1, index+1});
        }
        a[index] = maxi2;
        for (int i = 0; i < n;i++){
          
                if(a[i]<0){
                    a[i] += maxi2;
                    op.push_back({i + 1, 1+index});
                } 

            
        }
        int sum = a[0];
        for (int i = 1; i < n;i++){
            a[i] = a[i] + sum;
            op.push_back({i +1, i-1+1});
            sum = a[i];
        }
 
        }
        cout << op.size() << endl;
        for(auto it:op){
            cout << it.first << " " << it.second << endl;
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