#include <iostream>
using namespace std;

int main()
{
    int A, B;
	int sum = 0;
	cin >> A >> B;

	int* arr = new int[B];
	int val = 1;

	for (int i = 0; i < B;)
	{
		for (int j = 0; j < val && j < B; j++)
			arr[i++] = val;
		val++;
	}

	for (int i = A - 1; i < B; i++)
		sum += arr[i];

	cout << sum;
    delete [] arr;
}