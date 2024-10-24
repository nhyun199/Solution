#include <iostream>
using namespace std;

int main()
{
    int N;
	int totalUasblePlug = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int usablePlug;
		cin >> usablePlug;
		
		if (i != N - 1)
			totalUasblePlug += (usablePlug - 1);
		else
			totalUasblePlug += usablePlug;
	}
	cout << totalUasblePlug;
}