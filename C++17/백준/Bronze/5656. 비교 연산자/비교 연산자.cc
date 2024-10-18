#include <iostream>
#include <string>
using namespace std;

int main()
{
    int caseNum = 1;
	
	while (1)
	{
		int a = 0, b = 0;
		string oper = " ";
		bool result;
		cin >> a >> oper >> b;
		
		if (oper == "E")
			return 0;

		if (oper == ">")
		{
			result = (a > b);
		}
		else if (oper == ">=")
		{
			result = (a >= b);
		}
		else if (oper == "<")
		{
			result = (a < b);
		}
		else if (oper == "<=")
		{
			result = (a <= b);
		}
		else if (oper == "==")
		{
			result = (a == b);
		}
		else if (oper == "!=")
		{
			result = (a != b);
		}
		
		if (result)
			cout << "Case " << caseNum << ": true\n";
		else
			cout << "Case " << caseNum << ": false\n";

		caseNum++;
	}
}