#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, K;
	int max = 0;
	cin >> N >> K;
	vector<int> temperature(N);

	for (int i = 0; i < N; i++)
	{
		cin >> temperature[i];
	}
	 
	for (int i = 0; i <= N - K; i++)
	{
		int sum = temperature[i];
		for (int j = i + 1; j < i + K; j++)
		{
			sum += temperature[j];
		}
        
        if(i == 0)
            max = sum;
        
		if (max < sum)
			max = sum;
	}
	cout << max;
}