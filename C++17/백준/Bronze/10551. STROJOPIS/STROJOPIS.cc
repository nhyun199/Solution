#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string S;
	vector<int> finger(8, 0);

	cin >> S;

	for (char c : S)
	{
		switch (c)
		{
		case'1':case'Q':case'A':case'Z':
			finger[0]++;
			break;
		case'2':case'W':case'S':case'X':
			finger[1]++;
			break;
		case'3':case'E':case'D':case'C':
			finger[2]++;
			break;
		case'4':case'5':case'R':case'T':
		case'F':case'G':case'V':case'B':
			finger[3]++;
			break;
		case'6':case'7':case'Y':case'U':
		case'H':case'J':case'N':case'M':
			finger[4]++;
			break;
		case'8':case'I':case'K':case',':
			finger[5]++;
			break;
		case'9':case'O':case'L':case'.':
			finger[6]++;
			break;
		case'0':case'-':case'=':case'P':
		case'[':case']':case';':case'\'':
		case'/':
			finger[7]++;
			break;
		}
	}

	for (int i = 0; i < 8; i++)
		cout << finger[i] << '\n';
}