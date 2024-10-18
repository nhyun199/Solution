#include <iostream>
#include <string>
using namespace std;

int main()
{
    string dial;
	cin >> dial;
	int totalTime = 0;

	for (int i = 0; i < dial.size(); i++)
	{
		if (dial[i] <= 'C')
			totalTime += 3;
		else if (dial[i] <= 'F')
			totalTime += 4;
		else if (dial[i] <= 'I')
			totalTime += 5;
		else if (dial[i] <= 'L')
			totalTime += 6;
		else if (dial[i] <= 'O')
			totalTime += 7;
		else if (dial[i] <= 'S')
			totalTime += 8;
		else if (dial[i] <= 'V')
			totalTime += 9;
		else
			totalTime += 10;
	}
	cout << totalTime;
}