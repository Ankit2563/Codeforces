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
int funct(int s, int e, string &st)
{
    if (s > e)
    {
        return 0;
    }

    if (st[s] == st[e])
    {
        return 0 + funct(s + 1, e - 1, st);
    }
    else
    {
        return min(1 + funct(s + 1, e, st), 1 + funct(s, e - 1, st));
    }
}

void update(string &str,unordered_map<char,int>&mpp,int n,char first,char second){
    if(mpp[first]==mpp[second]){
        int c1 = mpp[first]/2, c2 = mpp[second] / 2;
        for (int i = 0; i < n;i++){
            if(str[i]==first){
                if(c1>0){
                    str[i] = 'R';
                }
                else{
                    str[i] = 'H';
                }
                c1--;
            }
            if(str[i]==second){
                if(c2>0){
                    str[i] = 'R';
                }
                else{
                    str[i] = 'H';
                }
                c2--;
            }
        }
    }
   else if (mpp[first] % 2 == 0 && mpp[second] % 2 == 0)
    {
        int evenN = mpp[first] / 2, evenS = mpp[second] / 2;
        for (int i = 0; i < n;i++){
            if(str[i]==first){
                if(evenN>0){
                    str[i] = 'R';
                }
                else{
                    str[i] = 'H';
                }
                evenN--; 
            }
            if(str[i]==second){
                if(evenS>0){
                    str[i] = 'R';
                }
                else{
                    str[i] = 'H';
                }
                evenS--;
            }

        }
    }
    else{
        int firstC = mpp[first], secondC = mpp[second];
        if(firstC>secondC){
            int needR = (firstC - secondC) / 2;
            for (int i = 0; i < n;i++){
                if(str[i]==first){
                    if(needR>0){
                        str[i] = 'H';
                    }
                    else{
                        str[i] = 'R';
                    }
                    needR--;
                }
                if(str[i]==second){
                    str[i] = 'R';
                }
            }
        }
        else{
            int needR = (secondC- firstC) / 2;
            for (int i = 0; i < n; i++)
            {
                if (str[i] == second)
                {
                    if (needR >0)
                    {
                        str[i] = 'R';
                    }
                    else
                    {
                        str[i] = 'H';
                    }
                    needR--;
                }
                if (str[i] == first)
                {
                    str[i] = 'H';
                }
            }
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    unordered_map<char, int> mpp;
    for (int i = 0; i < n;i++){
        mpp[str[i]]++;
    }

        if (mpp['N'] % 2 == 1 && mpp['S'] % 2 == 0 || mpp['N'] % 2 == 0 && mpp['S'] % 2 == 1 || mpp['E'] % 2 == 1 && mpp['W'] % 2 == 0 || mpp['W'] % 2 == 1 && mpp['E'] % 2 == 0)
        {
            NO;
            return;
        }
       if(n==2){
        if(mpp['S']==2||mpp['W']==2||mpp['E']==2||mpp['N']==2){
            cout << "RH" << endl;
            return;
        }
        else{
            NO;
            return;
        }
    }
    if(mpp['N']==mpp['S']&&mpp['E']==mpp['W']&&mpp['E']==mpp['N']){
        for (int i = 0; i < n;i++){
            if(str[i]=='N'||str[i]=='S'){
                str[i] = 'R';
            }
            else{
                str[i] = 'H';
            }
        }
        cout << str << endl;
        return;
    }
    update(str, mpp, n, 'N', 'S');
    update(str, mpp, n, 'E', 'W');
    cout << str << endl;
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