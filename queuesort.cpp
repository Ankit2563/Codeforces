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
int funct(int s, int e, string &st)
{
    if (s > e)
    {
        return 0;
    }

    if (st[s] == st[e])
    {
        return 0 + funct(s + 1, e - 1, st);
    }
    else
    {
        return min(1 + funct(s + 1, e, st), 1 + funct(s, e - 1, st));
    }
}

vector<int> LongestDecreasingSubsequence(vector<int> &v)
{
    if (v.size() == 0) 
        return {};

    vector<int> tail(v.size(), 0);
    int length = 1; 

    tail[0] = v[0];

    for (int i = 1; i < v.size(); i++)
    {

        
        auto b = tail.begin(), e = tail.begin() + length;
        auto it = lower_bound(b, e, v[i]);

        
        if (it == tail.begin() + length)
            tail[length++] = v[i];
        else
            *it = v[i];
    }

    
    vector<int> result(tail.begin(), tail.begin() + length);
    

    return result;
}
// void solve()
// {
//     int n, mini = INT_MAX,index=-1;
//     cin >> n;
//     vi a(n);
//     input(0, n, a);
    
//     for (int i = 0; i < n;i++){
//          if(mini>a[i]){
//              mini = a[i];
//              index = i;
//          } 
//     }
//     for (int i =index+1; i < n-1;i++){
//          if(a[i]>a[i+1]){
//              cout << -1 << endl;
//              return;
//          }
//     }
//     cout << index << endl;
//     return;
// }
// void solve()
// {
//     int n, m;
//     cin >> n >> m;
//     if (n % 2 == 1 && m % 2 == 1|| n % 2 == 0&& m % 2 == 0)
//     {
//         cout << "Bob" << endl;
//     }
//     else{
//         cout << "Alice" << endl;
//     }

// }
// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     vi a(n);
//     int sum = 0;
//     for (int i = 0; i < n;i++){
//         if(s[i]=='+'){
//             a.push_back(1);
//             sum++;
//         }
//         else{
//             a.push_back(-1);
//             sum--;
//         }
//     }
//     cout << abs(sum) << endl;
// }
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    vi s,t;
    input(0, n, a);
    int ans = 0;
    int j = 1;
    s.push_back(a[0]);
    while(j<n&&s.back()>=a[j]){
        s.push_back(a[j]);
        j++;
    }
    if(j==n){
        cout << 0 << endl;
        return;
    }

    for (int i = j; i < n;i++){
         
         if(t.size()==0){
             t.push_back(a[i]);
         }
         else{
             int sLast = s[s.size()-1],tLast=t[t.size()-1];
               if(a[i]<=sLast&&a[i]<=tLast){
                   if(sLast-a[i]>tLast-a[i]){
                       t.push_back(a[i]);
                   }
                   else{
                       s.push_back(a[i]);
                   }
               } 
               else if(a[i]<=sLast&&a[i]>=tLast){
                   s.push_back(a[i]);
               }
               else if(a[i]>=sLast&&a[i]<=tLast){
                   t.push_back(a[i]);

               }
               else{
                   if (sLast - a[i] > tLast - a[i])
                   {
                       t.push_back(a[i]);
                   }
                   else
                   {
                       s.push_back(a[i]);
                   }
                   ans++;
               }
         }
    }
    
    cout << ans << endl;
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