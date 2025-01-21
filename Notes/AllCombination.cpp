#include<bits/stdc++.h>
using namespace std;

int MOD = 1e9 + 7;

int modInverse(int a, int mod)
{
    int result = 1, power = mod - 2;
    while (power > 0)
    {
        if (power % 2 == 1)
            result = (1LL * result * a) % mod;
        a = (1LL * a * a) % mod;
        power /= 2;
    }
    return result;
}

vector<vector<int>> computeAllCombinations(int N, int K)
{
    vector<vector<int>> comb(N + 1, vector<int>(K + 1, 0));

    for (int n = 0; n <= N; ++n)
    {
        comb[n][0] = 1;
    }

    for (int n = 1; n <= N; ++n)
    {
        for (int k = 1; k <= K; ++k)
        {
            comb[n][k] = (comb[n - 1][k - 1] + comb[n - 1][k]) % MOD;
        }
    }

    return comb;
}

int main()
{
    int n, k;
    cin >> n >> k;


    vector<vector<int>> nCr = computeAllCombinations(n, k);
    // this will generate the all the combination where k belong to 1 to k and n belong to thee 1 to n;
    // n will depend on the value of the k i.e n will always greater than or equal to the k;
    // the result value uses the mod value in case of higher value
    // to access the where n = a and k = b then result = nCr[a][b];

}
