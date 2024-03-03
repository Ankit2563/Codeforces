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
long long getNo(vi &a)
{
    ll no = 0;
    for (int i = 0; i < 64; i++)
    {
        no += (1LL << i) * a[i]; // Using bit manipulation to set the ith bit
    }
    return no;
}

void solve()
{
    ll a, b, r;
    
    cin >> a >> b >> r;
    ll maxi,mini;
    if(a>b){
        maxi = a;
        mini = b;
    }
    else{
        maxi = b;
        mini = a;
    }
    if(r==0){
        cout << abs(maxi - mini) << endl;
        return;
    }
    ll r1 = r;
    vi v;
    vi mnv;
    vi mxv;
    while(r!=0){
        v.push_back(r % 2);
        r = r / 2;
    }
    while(maxi!=0){
        mxv.push_back(maxi % 2);
        maxi = maxi / 2;
    }
    while(mini!=0){
        mnv.push_back(mini % 2);
        mini = mini / 2;
    }
    int i1=mxv.size()-1;
    int i2=mnv.size()-1;
    int i3=v.size()-1;
    int te=0;
    ll no = 0;
    while (mnv.size() != 64)
    {
        mnv.push_back(0);
    }
    while (mxv.size() != 64)
    {
        mxv.push_back(0);
    }
    te=1;
    while (i1 >= 0 && ((mxv[i1] == 1 && mnv[i1] == 1) || mxv[i1] == 0 && mnv[i1] == 0))
    {
        mxv[i1]=0;
        mnv[i1]=0;
        //no=no+(ll)(powl(2,i1));
        i1--;
    }
    
    int index;
    index = i1-1;

  
 
    
    for (int i = index;i>=0 ;i--){
        if(mnv[i]==mxv[i]){
            continue;
        }
        else{
            ll no1 = 1LL << i;
            if(mnv[i]==0&&(ll)(no+no1)<=r1){
                
                    mnv[i] = 1;
                    mxv[i] = 0;
                    no = (ll)(no + no1);
            }
            
        }
    }
    
    cout << (ll)abs((getNo(mxv)) - (getNo(mnv))) << endl;
 ;
    return;
}
// 735268590557942972;
// 916721749674600979;
// 895150420120690183;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}