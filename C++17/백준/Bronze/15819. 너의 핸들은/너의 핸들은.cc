#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int N, I;
	cin >> N >> I;
	vector<string> handles;

	for (int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		handles.push_back(s);
	}
	sort(handles.begin(), handles.end());

	cout << handles[I - 1];    
}