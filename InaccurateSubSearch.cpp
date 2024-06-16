#include <bits/stdc++.h>

using namespace std;

#define f first
#define endl '\n'
#define s second
#define pb push_back
#define md 998244353

#define vi vector<int>
#define mod 1000000007
#define inf 1999999999999999999;
#define vp vector<pair<int, int>>
#define all(c) c.begin(), c.end()
#define rall(c) c.rbegin(), c.rend()
#define in(a)         \
    for (auto &i : a) \
    cin >> i
#define dbg(x) cout << #x << "->" << x << endl
#define mem(a, val) memset(a, val, sizeof(a))
#define out(a)            \
    for (auto i : a)      \
        cout << i << " "; \
    cout << endl
#define ebg(x, y) cout << #x << "->" << x << " " << #y << "->" << y << endl

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    vi b(m);
    map<int, int>mp1;
    map<int,int>mp2;
    map<int, int> mpp;
    for (int i = 0; i < m;i++){
        cin >> b[i];
        mp1[b[i]]++;
        mp2[b[i]]++;
    }

    int count = 0;
    for (int i = 0; i < n;i++){
        if(i<m){
           if(mp1[a[i]]>0){
               count++;
               
              if(mp1[a[i]]!=0){
                  mp1[a[i]]--;
              }
           }
           mpp[i] = count;
        }
        else{
            if(mp2[a[i-m]]>0){
                mp1[a[i - m]]++;  

            }
            if (mp1[a[i]] > 0)
            {
                count++;

                if (mp1[a[i]] != 0)
                {
                    mp1[a[i]]--;
                }
            }
            mpp[i] = count;
        }
    }
    int ans = 0;
    for (int i = m-1; i < n;i++){
          if(i==m-1){
            if(mpp[i]>=k){
                ans++;
            }
          }
          else{
            if(mpp[i]-mpp[i-m]>=k){
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