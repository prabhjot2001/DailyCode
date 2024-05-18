#include <iostream>
#include <vector>
#include <map>
#define endl "\n";
#define gap " ";
using namespace std;

class Solution
{
public:
    vector<int> solve(vector<int> &vec, int target)
    {
        int n = vec.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (vec[i] + vec[j] == target)
                    return {i, j};
            }
        }
        return {};
    }

    vector<int> solve2(vector<int> &vec, int target)
    {
        map<int, int> mp;
        for (int i = 0; i < vec.size(); i++)
        {
            int remaining = target - vec[i];
            if (mp.find(remaining) != mp.end())
            {
                return {i, mp[remaining]};
            }
            else{
                mp[vec[i]] = i;
            }
        }

        return {};
    }
};

int main()
{
    vector<int> vec = {1, 23, 3, 5, 2, 2, 5, 323, 5, 3, 5};
    Solution sol;
    int target = 10;
    vector<int> ans = sol.solve2(vec, target);
    for (auto ele : ans)
    {
        cout << ele << gap;
    }
}