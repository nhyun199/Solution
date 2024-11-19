#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long long N;
	cin >> N;

	if (N >= SHRT_MIN && N <= SHRT_MAX)
		cout << "short";
	else if (N >= INT_MIN && N <= INT_MAX)
		cout << "int";
	else
		cout << "long long";
}