#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	string S;
	vector<int> numbers;
	cin >> n;
	
	while (n > 0)
	{
		numbers.push_back(n % 10);
		n /= 10;
	}
	sort(numbers.begin(), numbers.end(), greater<int>());

	for (int i = 0; i < numbers.size(); i++)
	{
		S.push_back(numbers[i] + '0');
	}

	cout << S;    
}