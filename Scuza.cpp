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
    vi a(n);
    vi b(n);
    vl prefix(n);
    prefix[0] = a[0];
    for (int i = 1; i < n;i++){
        prefix[i] = prefix[i - 1] + a[i];
    }
 
   
    sort(b.begin(), b.end());
    map<int, int> m;
    
    stack<int> st;
    int j = 0;
    for (int i = n - 1; i >= 0;i--){
        st.push(a[i]);
    }

        m[-1] = 0;
      while(!st.empty()&&j!=q){
        int val = st.top();
        if(val<=b[j]){
            m[j] = n - st.size()+1;
            st.pop();
        }
        else{
            j++;
            m[j] = m[j - 1];
        }
    }
    if(j!=n){
        for (int k = j; k < q;k++){
            if(m.count(k)==0){
                m[k] = m[k - 1];
            }
        }
    }
    map<int, long long> m1;
    for (int i = 0; i < q;i++){
        m1[i] = prefix[m[i]];
    }
    for (int i = 0; i < q;i++){
        cout << m1[i] << " ";
    }
    cout << endl;
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