#include <bits/stdc++.h>
#define endl "\n";
#define gap " ";
using namespace std;

class Solution
{
public:
    // input vector is already sorted
    vector<int> solve(vector<int> &vec, int target)
    {
        for (auto i : vec)
        {
            cout << i << gap;
        }
        int n = vec.size();
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            int sum = vec[i] + vec[j];
            if (sum > target)
                j--;
            else if (sum < target)
                i++;
            else
                return {i, j};
        }
    }
};

int main()
{
    vector<int> vec = {1, 23, 3, 5, 2, 2, 5, 323, 5, 3, 5};
    sort(vec.begin(), vec.end());
    Solution sol;
    int target = 10;
    vector<int> ans = sol.solve(vec, target);
    for (auto ele : ans)
    {
        cout << ele << gap;
    }
}