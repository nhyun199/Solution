#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e;
	int count = 0;
	int mostlyMultiple = 0;
	cin >> a >> b >> c >> d >> e;

	while (count < 3)
	{
		count = 0;
		mostlyMultiple++;

		if (mostlyMultiple % a == 0)
			count++;

		if (mostlyMultiple % b == 0)
			count++;

		if (mostlyMultiple % c == 0)
			count++;

		if (mostlyMultiple % d == 0)
			count++;

		if (mostlyMultiple % e == 0)
			count++;
	}
	cout << mostlyMultiple;
}