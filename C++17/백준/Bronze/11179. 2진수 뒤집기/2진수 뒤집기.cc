#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int N;
	int decimal = 0;
	string binary;
	cin >> N;

	while (N != 0)
	{
		string str = to_string(N % 2);
		binary.insert(0, str);
		N /= 2;
	}

	for (int i = 0; i < binary.size(); i++)
	{
		if (binary[i] == '1')
			decimal += pow(2, i);
	}

	cout << decimal;    
}