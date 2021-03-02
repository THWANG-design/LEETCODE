#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int>ans;
        unsigned i, j;
        for (i = 0; i < (nums.size() - 1); i++)
        {
            for (j = i+1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};
int main()
{   
    vector<int>result;
    vector<int> example;
    int arrary[] = {3, 2, 4 };
    unsigned i;
    for (i = 0; i < sizeof(arrary) / sizeof(int); i++)
        example.push_back(arrary[i]);
    int target = 6;
    Solution solution1;
    result = solution1.twoSum(example, target);
    for (i = 0; i < result.size(); i++)
        cout << result[i] << " ";
}