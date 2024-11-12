#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	string S;
	cin >> T;
	cin.ignore();

	for (int i = 0; i < T; i++)
	{
		getline(cin, S);
		if (S[S.size() - 1] != '.')
		{
			S.push_back('.');
			cout << S << '\n';
		}
		else
			cout << S << '\n';
	}    
}