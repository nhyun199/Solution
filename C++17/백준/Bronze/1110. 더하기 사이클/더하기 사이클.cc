#include <iostream>
using namespace std;

int main()
{
    int N;
	cin >> N;
	int origin = N;
	int front;
	int back;
	int add;
	int newNum;
	int cycle = 0;
    
	while (1)
	{
		if (N < 10)
		{
			front = 0;
			back = N;
		}
		else
		{
			front = N / 10;
			back = N % 10;
		}
		
		add = front + back;
		
		if (add < 10)
		{
			newNum = back * 10 + add;
		}
		else
		{
			newNum = back * 10 + add % 10;
		}

		cycle++;

		if (newNum == origin)
		{
			cout << cycle;
			return 0;
		}
		else
			N = newNum;
	}
}