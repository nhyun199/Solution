#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
	cin >> n;
	cin.ignore();

	for (int i = 0; i < n; i++)
	{
		string hero;
		int g = 0;
		int b = 0;

		
		getline(cin, hero);

		for (auto it = hero.begin(); it != hero.end(); it++)
		{
			if (*it == 'B' || *it == 'b')
				b++;
			else if (*it == 'G' || *it == 'g')
				g++;
		}

		if (g > b)
			cout << hero << " is GOOD\n";
		else if (b > g)
			cout << hero << " is A BADDY\n";
		else
			cout << hero << " is NEUTRAL\n";
	}
}