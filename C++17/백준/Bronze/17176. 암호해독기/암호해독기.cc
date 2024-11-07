#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	int n;
	string pass;
	string plainText;
	int upper = 'A' - 1;
	int lower = 'a' - 1;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> n;
		if (n == 0)
			pass.push_back(' ');
		else if(n < 27)
			pass.push_back(upper+n);
		else
		{
			n -= 26;
			pass.push_back(lower + n);
		}
	}
	
	cin.ignore();
	getline(cin, plainText);
	sort(pass.begin(), pass.end());
	sort(plainText.begin(), plainText.end());

	if (pass == plainText)
		cout << 'y';
	else
		cout << 'n';    
}