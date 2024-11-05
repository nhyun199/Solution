#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int N, M;
	vector<string> origin;
	vector<string> magnify;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		string input;
		cin >> input;
		origin.push_back(input);
	}

	for (int i = 0; i < N; i++)
	{
		string input;
		cin >> input;
		magnify.push_back(input);
	}

	vector<string> convert(N);
	bool isEyfa = true;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			convert[i] += origin[i][j];
			convert[i] += origin[i][j];
		}
		
		if (convert[i] != magnify[i])
		{
			isEyfa = false;
			break;
		}
	}

	if (isEyfa)
		cout << "Eyfa";
	else
		cout << "Not Eyfa";
}