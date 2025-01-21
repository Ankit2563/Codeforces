#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<long long, long long>>
#define vint vector<int>
#define all(v) v.begin(), v.end()
#define MOD 1000000007
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

    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> arr(n);
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    
    if(__gcd(a,b)==1){
        cout << 0 << endl;
        return;
    }
    int x = __gcd(a, b);
    sort(arr.begin(), arr.end());
    ll maxi = arr[n-1];
    ll mini = INT_MAX;
    priority_queue<ll> q;
    priority_queue<ll, vector<ll>, greater<ll>> mq;
    q.push(maxi);
    mq.push(maxi);
    for (int i = 0; i < n-1;i++){
        if((maxi-arr[i])/x>=1){
            arr[i] = arr[i] + x *(long long) ((maxi - arr[i]) / x);
        }
        q.push(arr[i]);
        mq.push(arr[i]);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n;i++){
        int mtop = mq.top();
        
        mq.pop();
        int qtop = q.top();
        mini = min((long long)(qtop - mtop), mini);
        mq.push((mtop + x));
        q.push(mtop + x);
    }
    cout << mini << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
        solve();
}