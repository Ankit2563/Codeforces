
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

void solve()
{
    int n;
    cin >> n;
    // map<int,int>
    multiset<int, greater<int>>mset1;
    multiset<int>mset2;
    vector<pair<char, pair<int, int>>> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i].first >> v[i].second.first >> v[i].second.second;
    }
     for (int i = 0; i < n; i++)
        {
            char ch = v[i].first;
            int l = v[i].second.first;
            int r = v[i].second.second;

            if(ch=='+'){
                mset1.insert(l);
                mset2.insert(r);
                auto it1 = *mset1.begin();
                
                auto it2 = *mset2.begin();
                
                if(it2<it1){
                    YES;
                }
                else{
                    NO;
                }
            }
            else{
                

                auto it3 = mset1.find(l);
                auto it4 = mset2.find(r);
                mset1.erase(it3);
                mset2.erase(it4);
                auto it1 = mset1.begin();
                int idy = *it1;
                auto it2 = mset2.begin();
                int idx = *it2;
                if (idx < idy)
                {
                    YES;
                   
                }
                else
                {
                    NO;
                }
            }

        

   }
}

int main()
{

    int t;
    t = 1;
    while (t--)
    {

        solve();
    }
}