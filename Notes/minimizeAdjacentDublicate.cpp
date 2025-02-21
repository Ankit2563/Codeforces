#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vip vector<pair<int, int>>
#define vil vector<long long>
#define all(v) v.begin(), v.end()
#define MOD 1000000007
#define MXL 1000000000000000000
#define PI (long double)2 * acos(0.0)
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl

void input(int i, int n, vector<int> &a)
{
    for (int k = i; k < n; k++)
        cin >> a[k];
}

void inputl(int i, int n, vector<long long> &a)
{
    for (int k = i; k < n; k++)
        cin >> a[k];
}

void print(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}

string minimizeAdjacentDuplicates(string s)
{
    unordered_map<char, int> freq;
    for (char c : s)
    {
        freq[c]++;
    }

    priority_queue<pair<int, char>> pq;
    for (auto it : freq)
    {
        pq.push({it.second, it.first});
    }

    string result = "";

    while (!pq.empty())
    {
        auto count = pq.top().first;
        auto ch = pq.top().second;
        pq.pop();

        result += ch;
        count--;
        if (pq.size() >= 1)
        {
            auto count2 = pq.top().first;
            auto ch2 = pq.top().second;
            pq.pop();
            result += ch2;
            count2--;
            if (count2 != 0)
            {
                pq.push({count2, ch2});
            }
            if (count != 0)
            {
                pq.push({count, ch});
            }
        }
        else
        {
            if (count != 0)
            {
                pq.push({count, ch});
            }
        }
    }

    return result;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string result = minimizeAdjacentDuplicates(s);
    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}