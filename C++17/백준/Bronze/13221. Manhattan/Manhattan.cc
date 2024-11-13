#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x, y, N;
	int tx, ty; 
	int minX, minY;
	int minDistance = 2147483647;
	cin >> x >> y >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> tx >> ty;
		int distance = abs(x - tx) + abs(y - ty);

		if (minDistance > distance)
		{
			minDistance = distance;
			minX = tx;
			minY = ty;
		}
	}
	cout << minX << ' ' << minY;    
}