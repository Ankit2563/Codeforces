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
    int n, q;
    cin >> n >> q;
    vector<string> city(n);
    for (int i = 0; i < n;i++)
        cin >> city[i];
    map<char, int> mp;
    mp['B'] = 2;
    mp['R'] = 3;
    mp['G'] = 5;
    mp['Y'] = 7;
    int arr[6] = {6, 10, 14, 15, 21, 35};
    map<int, vector<int>>mpp;
    for (int i = 0; i < n;i++)
    {
        mpp[mp[city[i][0] * city[i][1]]].push_back(i);
    }
    vector<int> ans;
    for (int i = 0; i < q;i++){
        int x1, y1;
        cin >> x1>> y1;
        int x = min(x1, y1);
        int y = max(x1, y1);
        int mini = INT_MAX;
        if (city[x - 1][0] == city[y - 1][0] || city[x - 1][0] == city[y - 1][1] || city[x - 1][1] == city[y - 1][0] || city[x- 1][1] == city[y - 1][1]){
            ans.push_back(abs(x - y));
        }
        else{
            int node = mp[city[x-1][0]] * mp[city[x-1][1]];


            for (int j = 0; j<6;j++){
                if ((arr[j] != node) && ((arr[j] % mp[city[x-1][0]] == 0) || (arr[j] % mp[city[x-1][1]] == 0)))
                {
                    int targetNode = arr[j];
                    int idx = lower_bound(mpp[targetNode].begin(), mpp[targetNode].end(), y - 1)-mpp[targetNode].begin();
                    if(idx!=mpp[targetNode].size()){
                      
                        if (mpp[targetNode][idx] < y-1 && mpp[targetNode][idx] < x-1)
                        {
                            mini = min(abs(x - 1 - mpp[targetNode][idx]) + abs(y - 1 - mpp[targetNode][idx]), mini);
                        }
                        else if (mpp[targetNode][idx] > y-1)
                        {
                            mini = min(abs(x - 1 - mpp[targetNode][idx]) + abs(y - 1 - mpp[targetNode][idx]), mini);
                        }
                        else {
                            mini = min(abs(y-x), mini);
                        }
                    }
                }
            }
            if(mini==INT_MAX){
                ans.push_back(-1);
            }
            else{
                ans.push_back(mini);
            }
        }
    }
    for (int i = 0; i < n;i++){
        cout << ans[i] << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
}