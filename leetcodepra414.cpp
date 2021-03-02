#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int arrary[] = { 5, 8, 9, 1, 7 ,54};
	vector<int>exa;
	for (int i = 0; i < sizeof(arrary) / sizeof(int); i++)
		exa.push_back(arrary[i]);
	int i, j;
	for (i = 0; i < (exa.size() - 1); i++)
	{
		for (j = i + 1; j < exa.size(); j++)
		{
			if (exa[j] == exa[i])
				exa[j] = INT_MAX;
		}

	}
	exa.erase(remove(exa.begin(), exa.end(), INT_MAX), exa.end());
	if (exa.size() < 3)
		cout << exa[1];
	else cout << exa[2];
	return 0;
	
}
