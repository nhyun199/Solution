#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string A;
	string B;
	cin >> A >> B;
	int size = A.size() > B.size() ? A.size() : B.size();

	if (A.size() != B.size())
	{
		int temp = abs(int(A.size() - B.size()));
		if (A.size() > B.size())
		{
			for (int i = 0; i < temp; i++)
				B = '0' + B;
		}
		else
		{
			for (int i = 0; i < temp; i++)
				A = '0' + A;
		}
	}

	for (int i = 0; i < size; i++)
	{
		int num = (A[i] - '0') + (B[i] - '0');
		cout << num;
	}    
}