#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int score = 0;
	vector<int> scoreW;
	vector<int> scoreK;

	for (int i = 0; i < 20; i++)
	{
		cin >> score;
		if (i < 10)
			scoreW.push_back(score);
		else
			scoreK.push_back(score);
	}
	sort(scoreW.begin(), scoreW.end());
	sort(scoreK.begin(), scoreK.end());

	int sumW = scoreW[7] + scoreW[8] + scoreW[9];
	int sumK = scoreK[7] + scoreK[8] + scoreK[9];

	cout << sumW << ' ' << sumK;    
}