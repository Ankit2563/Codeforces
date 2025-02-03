#include <iostream>
#include <vector>

using namespace std;




void sieve(int n,vector<bool>&is_prime)
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
 
}

int main()

{
    int n;
    cin >> n;
    vector<bool> is_prime(n+ 1, true);
    sieve(n,is_prime);
    // in this we have find which no is prine in just O(n*loglog(n));
    for (int i = 0; i < n;i++){
        cout << is_prime[i] << " ";
    }
}
