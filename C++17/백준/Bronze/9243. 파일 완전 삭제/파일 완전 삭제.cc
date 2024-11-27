#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	string bit;
	string deleted;
	
	cin >> N >> bit >> deleted;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < bit.size(); j++)
		{
			if (bit[j] == '1')
				bit[j] = '0';
			else
				bit[j] = '1';
		}
	}
	
	if (bit == deleted)
		cout << "Deletion succeeded";
	else
		cout << "Deletion failed";    
}