#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N, B;
	cin >> N >> B;
	string convert;
	
	while (N != 0)
	{
		int n = N % B;
		N /= B;
		string str;

		if (n > 9)
		{
			str = n - 10 + 'A';
		}
		else
			str = to_string(n);

		convert += str;
		
	}
	reverse(convert.begin(), convert.end());
	cout << convert;    
}