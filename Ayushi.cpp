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

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size(), m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < m; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
void helper(int n,int rot,int vert,int hor,vector<vector<int>>&mat ){

    for (int i = 0; i < rot / 90;i++){
        rotate(mat);
    }
    if(hor==1){
        for (int i = 0; i < n/2;i++){
            for (int j = 0; j < n;j++){
                swap(mat[j][i], mat[j][n-i-1]);
            }
        }
    }
    if(vert==1){
        for (int i = 0; i < n/2;i++){
            for (int j = 0; j < n;j++){
                swap(mat[i][j], mat[n - i - 1][j]);
            }
        }
    }
    
}
void solve()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    vector<int> res;
    for (int i = 0; i < n;i++){
        string s = v[i];
        string ans;
        for (int j = 0; j < s.size();j++){
            
            if(s[i]>='0'&&s[i]<='9'){
                ans.push_back(s[i]);
            }
            else{
                if(ans.size()>0){
                    int num = stoi(ans);
                    if(num!=0){
                        res.push_back(num);
                    }
                }
                ans.clear();
            }
        }
    }
    sort(res.begin(), res.end());
    
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
}