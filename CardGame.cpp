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
    int n;
    cin >> n;
    char trump;
    cin >> trump;

    vector<string> a(2 * n);
    for (int i = 0; i < 2 * n;i++){
        cin >> a[i];
    }
    
    map<char, set<char>> mp;
    for(auto it:a){
        mp[it[1]].insert(it[0]);
    }

    vector<pair<string, string>> ans;
    vector<char> v = {'C', 'D', 'H', 'S'};
    for (int i = 0; i < 4; i++)
    {
        if (v[i] == trump)
            continue;

        while (mp[v[i]].size() >= 2)
        { 
            string s1, s2;
            char ch1 = *mp[v[i]].begin();
            char ch2 = *mp[v[i]].rbegin();
            mp[v[i]].erase(mp[v[i]].find(ch1));
            mp[v[i]].erase(mp[v[i]].find(ch2));
            s1.push_back(ch1);
            s1.push_back(v[i]);
            s2.push_back(ch2);
            s2.push_back(v[i]);
            ans.push_back({s1, s2});
        }
        if(mp[trump].size()>0&&mp[v[i]].size()==1){
            string s1, s2;
            char ch1 = *mp[v[i]].begin();
            char ch2 = *mp[trump].begin();
            mp[v[i]].erase(mp[v[i]].find(ch1));
            mp[trump].erase(mp[trump].find(ch2));
            s1.push_back(ch1);
            s1.push_back(v[i]);
            s2.push_back(ch2);
            s2.push_back(trump);
            ans.push_back({s1, s2});
        }
    }
     if((mp[trump].size())%2==1){
         cout << "IMPOSSIBLE" << endl;
         return;
     }
    for (int i = 0; i < 4; i++)
    {
        if (v[i]!= trump){
            if(mp[v[i]].size()>0){
                cout << "IMPOSSIBLE" << endl;
                return;
            }
            else{
                continue;
            }
        }
           

        while (mp[trump].size() >= 2)
        {
            string s1, s2;
            char ch1 = *mp[trump].begin();
            char ch2 = *mp[trump].rbegin();
            mp[trump].erase(mp[trump].find(ch1));
            mp[trump].erase(mp[trump].find(ch2));
            s1.push_back(ch1);
            s1.push_back(trump);
            s2.push_back(ch2);
            s2.push_back(trump);
            ans.push_back({s1, s2});
        }
       
    }
    for(auto it:ans){
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