#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int valueLOVE(string name, string teamName)
{
	int love[4] = { 0 };
	int value = 0;
	for (int i = 0; i < name.size(); i++)
	{
		switch (name[i])
		{
		case 'L':
			love[0]++;
			break;
		case 'O':
			love[1]++;
			break;
		case 'V':
			love[2]++;
			break;
		case 'E':
			love[3]++;
			break;
		}
	}

	for (int i = 0; i < teamName.size(); i++)
	{
		switch (teamName[i])
		{
		case 'L':
			love[0]++;
			break;
		case 'O':
			love[1]++;
			break;
		case 'V':
			love[2]++;
			break;
		case 'E':
			love[3]++;
			break;
		}
	}

	value = ((love[0] + love[1]) * (love[0] + love[2]) * (love[0] + love[3]) *
			 (love[1] + love[2]) * (love[1] + love[3]) * (love[2] + love[3]));

	return value % 100;
}

int main()
{
    string name;
	int N;
	int maxPercent = 0;
	vector<pair<string, int>> team;

	cin >> name;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string teamName;
		cin >> teamName;

		if (N == 1)
		{
			cout << teamName;
			return 0;
		}

		team.push_back(make_pair(teamName, valueLOVE(name, teamName)));
		if (maxPercent < team[i].second)
			maxPercent = team[i].second;
	}

	sort(team.begin(), team.end());

	for (pair<string, int> p : team)
	{
		if (p.second == maxPercent)
		{
			cout << p.first;
			return 0;
		}
	}
}

