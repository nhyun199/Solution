#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;
	string input;
	int sum = 0;

	while (cin >> input)
	{
		S += input;
	}

	int START = 0;
	int END = S.find(',');
	int num;

	while (END != string::npos)
	{
		num = stoi(S.substr(START, END - START));
		sum += num;
		START = END + 1;
		END = S.find(',', START);
	}

	if (START < S.size())
	{
		num = stoi(S.substr(START));
		sum += num;
	}

	cout << sum;    
}