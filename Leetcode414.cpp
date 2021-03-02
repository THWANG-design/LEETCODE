#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution
{
public:
	int thirdmax(vector<int>& nums)
	{
		int i, j;
		for (i = 0; i < (nums.size() - 1); i++)
		{
			for (j = i + 1; j < nums.size(); j++)
			{
				if (nums[j] == nums[i])
					nums[j] = INT_MAX;
			}
		}
		nums.erase(remove(nums.begin(), nums.end(), INT_MAX), nums.end());
		sort(nums.begin(), nums.end(), greater<int>());
		if (nums.size() < 3)
			return nums[0];
		else return nums[2];
	}
	
};
int main()
{
	int i;
	vector<int>example;
	int arrary[] = { 1, 2};
	for (i = 0; i < sizeof(arrary) / sizeof(int); i++)
		example.push_back(arrary[i]);
	Solution solution;
	cout << solution.thirdmax(example) << endl;
	return 0;
}