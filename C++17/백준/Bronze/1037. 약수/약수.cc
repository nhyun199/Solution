#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
	cin >> N;

	vector<int> realDivs;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		realDivs.push_back(num);
	}
	sort(realDivs.begin(), realDivs.end());

	int len = realDivs.size();

	if (N == 1)
		cout << realDivs[0] * realDivs[0];
	else if (N >= 2)
		cout << realDivs[0] * realDivs[len - 1];
}