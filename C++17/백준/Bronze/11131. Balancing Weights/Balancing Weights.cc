#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++)
	{
		int result = 0;
		int N, d;
		cin >> N;

		for (int j = 0; j < N; j++)
		{
			cin >> d;
			result += (d * 100);
		}

		if (result > 0)
			cout << "Right\n";
		else if (result == 0)
			cout << "Equilibrium\n";
		else
			cout << "Left\n";
	}    
}