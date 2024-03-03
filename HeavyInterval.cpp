#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void generating(int cnt, vector<int> &v, int no, int cnt1, int cnt2)
{    if(cnt<0)
        return;
    if (cnt == 0 || cnt ==6 || cnt == 4|| cnt == 2)
    {
         if(cnt1==cnt2){
             v.push_back(no);
             
         }
     }

     
     generating(cnt -1, v,no*10+4 , cnt1 + 1, cnt2);
   
     generating(cnt -1, v, no*10+7, cnt1, cnt2 + 1);
    
}
void solve(int t, vector<int> &v)
{

    int si = v.size();
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        for (int j = 0; j < si; j++)
        {

            if (n <= v[j])
            {
                cout << v[j] << endl;
                break;
            }
        }
    }
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    vector<int> v;

    generating(8, v, 0, 0, 0);
    cout << v.size() << endl;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
   
    solve(t, v);
    return 0;
}
