#include <iostream>
#include <string>
using namespace std;

int main()
{
	string X;
	int num;
	cin >> X;

	if (X[0] == '0')
	{
		if (X[1] == 'x')
		{
			num = stoi(X, nullptr, 16);
		}
		else
		{
			num = stoi(X, nullptr, 8);
		}
		cout << num;
	}
	else
		cout << X;    
}