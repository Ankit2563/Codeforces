#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
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
void inputl(int i, int n, vector<long long> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}
void inputi(int i, int n, vector<int> &a)
{
    for (int k = i; k < n; k++)
    {
        cin >> a[k];
    }
    return;
}

int find(int i, map<int, int> &m)
{

    int x = i;
    int n = m.size();
    int j = sqrt(x);
    int k = sqrt(2 * n);

    for (int f = k + 1; f >= j; f--)
    {
        if (m[f * f - i] == 1)
        {
            m[f * f - i] = 0;
            return f * f - i;
        }
    }
    return -1;
}
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    inputi(0, n, a);
    map<int, long long>closest,closestl;
    int prev = a[1]-a[0];
    closest[0]=0;
    bool temp = false;
    for (int i = 1; i < n-1;i++){
           if(prev>a[i+1]-a[i]){
               if(temp==false){
               closest[i]=closest[i-1]+1;
               }
               else{
                   closest[i] = closest[i - 1] + prev;
                   temp = false;
               }
               
           }
           else{
               if(temp==true){
                 closest[i] = closest[i - 1] + prev;  
               }
               else{
               closest[i] = closest[i - 1] + 1;
               temp = true;
               }
           }
           prev = a[i + 1] - a[i];
    }
    if(temp==true){
        closest[n - 1] = closest[n - 2] + prev;
    }
    else
    closest[n - 1] = closest[n - 2] + 1;
    prev = a[n-1]-a[n-2];
    closestl[n-1]++;
    for (int i = n - 2; i > 0;i--){
             if(abs(a[i]-a[i-1])<prev){
                 closestl[i]=closestl[i+1]+1;
                 prev = a[i]-a[i-1];
             }
             else{

                 closestl[i] = closestl[i+1]+abs(a[i -1] - a[i]);
                 prev = a[i]-a[i-1];
             }
    }
   
    closestl[0] = closestl[1] + 1;

    int m;
    cin >> m;

    for (int i = 0; i < m;i++){
        int x, y;
        cin >> x >> y;
        if(x<y){
            cout << closest[y-1] - closest[x-1] << endl;
        }
        else{
            cout << abs(closestl[y] - closestl[x]) << endl;
        }

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