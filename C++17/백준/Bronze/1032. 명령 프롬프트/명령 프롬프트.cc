#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
	string search;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string fileName;
		cin >> fileName;

		if (i == 0)
		{
			search = fileName;
		}
		else
		{
			for (int j = 0; j < fileName.size(); j++)
			{
				if (search[j] != fileName[j])
					search[j] = '?';
			}
		}
	}
	cout << search;
}