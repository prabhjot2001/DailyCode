#include <bits/stdc++.h>
#define endl "\n";
#define gap " ";
using namespace std;

class Solution
{
public:
//find the elements whose sum is = 0;
//your answer should not contain the duplicates
    vector<vector<int>> solve(vector<int> &v)
    {
       int n = v,size();
       
    }
};

int main()
{
    vector<int> vec = {1, 23, 3, 5, 2, 2, 5, 323, 5, 3, 5};
    Solution sol;
    vector<int> ans = sol.solve(vec);
    for (auto outer : ans)
    {
        cout<<"{";
        for(auto inner : outer)
        {
            cout<<inner<<gap;
        }
        cout<<"}";
    }
}