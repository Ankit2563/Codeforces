#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

bool is_good(vector<int> &subarray)
{
    
    for (int num : subarray)
    {
        
        
        
    }
    return stack.empty();
}

int process_queries(vector<pair<int, pair<int, int>>> &queries, vector<int> &A)
{
    int result = 0;
    for (auto &query : queries)
    {
        if (query.first == 1)
        {
            vector<int> subarray(A.begin() + query.second.first - 1, A.begin() + query.second.second);
            if (is_good(subarray))
            {
                result = (result + subarray.size()) % MOD;
            }
        }
        else if (query.first == 2)
        {
            A[query.second.first - 1] = query.second.second;
        }
    }
    return result;
}

int main()
{
    vector<int> A = {2, 4, 7, 10, 12, 13, 14, 15, 16, 27, 18};
    vector<pair<int, pair<int, int>>> queries = {{1, {1, 4}}, {1, {2, 5}}, {2, {1, 3}}, {1, {1, 4}}};
    cout << process_queries(queries, A) << endl;
    return 0;
}