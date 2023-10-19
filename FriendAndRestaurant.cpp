#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<long long>
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
void mergeStrings(string s1, string s2)
{
    int len1 = s1.size();
    int len2 = s2.size();
    int pntr1 = 0;
    int pntr2 = 0;
    string ans = "";
    while (pntr1 < len1 && pntr2 < len2)
    {
        if (s1[pntr1] < s2[pntr2])
        {
            ans += s1[pntr1];
            pntr1++;
        }

        else
        {
            ans += s2[pntr2];
            pntr2++;
        }
    }

    if (pntr1 < len1)
    {
        ans += s1.substr(pntr1, len1);
    }
    if (pntr2 < len2)
    {
        ans += s2.substr(pntr2, len2);
    }
    cout << ans << endl;
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    vi b(n);
    input(0, n, a);
    input(0, n, b);
    for (int i = 0; i < n;i++){
        b[i] = b[i] - a[i];
    }
    sort(b.begin(), b.end());
    int i = 0, j = n - 1;
    int cnt = 0;
    while(i<j){
       if(b[i]+b[j]>=0){
            cnt++;
            i++;
            j--;
       }
       else{
            i++;
            
       }
    }
    cout << cnt << endl;
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