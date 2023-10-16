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


void solve()
{
    int n,k;
    cin >> n>>k;
    string s;
    cin >> s;
   
    if(k%2==0){
        sort(s.begin(), s.end());
        cout << s << endl;
        return;
    }

    string s1, s2;

    for (int i = 0; i < n;i++){
        if(i%2==0){
            s1 += s[i];
        }
        else{
            s2 += s[i];
        }
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    bool curr = true;
    int i = 0, j = 0;
   
    bool temp = false;
   
    for (; i < s1.size() && j < s2.size();){
      
            cout << s1[i];
            cout << s2[j];
            j++;
            i++;
        }
    while(i<s1.size()){
        cout << s1[i];
        i++;
    }

    while (j < s2.size())
    {
        cout << s2[j];
        j++;
    }
    cout << endl;
    return;
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