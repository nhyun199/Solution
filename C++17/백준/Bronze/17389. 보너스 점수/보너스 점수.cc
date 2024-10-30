#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
	int score = 0;
	int bonusScore = 0;
	string result;
	cin >> N >> result;

	for (int i = 0; i < N; i++)
	{
		int baseScore = i + 1;
		if (result[i] == 'O')
		{
			score += baseScore + bonusScore;
			bonusScore++;
		}
		else
		{
			bonusScore = 0;
		}
	}
	cout << score;
}