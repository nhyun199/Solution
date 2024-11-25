#include <iostream>
#include <string>
using namespace std;

int main()
{
	string normal;
	string pass;

	getline(cin, normal);
	getline(cin, pass);

	int length = pass.length();

	for (int i = 0; i < normal.size(); i++)
	{
		char ch;

		if (normal[i] == ' ')
		{
			ch = ' ';
			cout << ' ';
		}

		else if (normal[i] - pass[i % length] > 0)
		{
			ch = normal[i] - pass[i % length] + 96;
			cout << ch;
		}
			
		else
		{
			int temp = pass[i % length] - normal[i];
			ch = 'z' - temp;
			cout << ch;
		}
	}    
}