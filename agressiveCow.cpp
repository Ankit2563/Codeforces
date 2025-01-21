#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());

        int low = 0, high = (a[n-1]);
        int ans = 0;
        while (low <= high)
        {
            int mid = (high + low) / 2;

            int prev = a[0];
            int cows = 0;
            for (int i = 1; i < n; i++)
            {
                if (a[i] - prev >= mid)
                {
                    prev = a[i];
                    cows++;
                }
            }
            if (cows + 1 >= c)
            {
                ans = max(ans, mid);
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}