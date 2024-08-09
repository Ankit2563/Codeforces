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
#define nL cout << endl;
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
}

vector<int> findDivisors(int n)
{
    vector<int> divisors;

    // Iterate up to the square
    // root of n to find divisors
    // Calculate the square root of n
    int sqrtN = sqrt(n);

    
    for (int i = 1; i <= sqrtN; ++i)
    {
        
        if (n % i == 0)
        {
            divisors.push_back(i);

            if (i != n / i)
            {
                divisors.push_back(n / i);
            }
        }
    }

    return divisors;
}
void solve()
{

    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> alldiv = findDivisors(n);
    int mini = n;
    for (int i = 0; i < alldiv.size();i++){
        int window = alldiv[i];
        int k = 0;
        int cnt = 0;
        for (int j = window; j < n;j++){
              if(s[j]!=s[k%(window)]){
                  cnt++;
                  
              }
              k++;
        }
        if(cnt<=1){
            mini = min(window, mini);
        }
    }
    int ans = n;
    for (int i = alldiv.size()-1; i>=0;i--){
        int window = alldiv[i];
        int k = 0;
        int cnt = 0;
        for (int j = n-1-window; j >=0;j--){
              if(s[j]!=s[n-1-k%(window)]){
                  cnt++;
                  
              }
              k++;
        }
        if(cnt<=1){
            ans = min(window, ans);
        }
    }
    cout << min(mini,ans)<< endl;
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