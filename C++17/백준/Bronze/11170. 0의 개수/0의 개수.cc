#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	int N, M;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N >> M;
		int count = 0;
		for (int j = N; j <= M; j++)
		{
			for (char c : to_string(j))
			{
				if (c == '0')
					count++;
			}
		}
		cout << count << '\n';
	}    
}