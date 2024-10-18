#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string music;
	getline(cin, music);
	istringstream iss(music);
	string token;

	int cmajor = 0;
	int aminor = 0;
	while (getline(iss, token, '|'))
	{
		if (token[0] == 'A' || token[0] == 'D' || token[0] == 'E')
			aminor++;
		else if (token[0] == 'C' || token[0] == 'F' || token[0] == 'G')
			cmajor++;
	}
	char last = token.back();

	if (cmajor > aminor)
		cout << "C-major";
	else if (cmajor < aminor)
		cout << "A-minor";
	else if (cmajor == aminor)
	{
		if (last == 'A' || last == 'D' || last == 'E')
			cout << "A-minor";
		else if (last == 'C' || last == 'G' || last == 'F')
			cout << "C-major";
	}
}