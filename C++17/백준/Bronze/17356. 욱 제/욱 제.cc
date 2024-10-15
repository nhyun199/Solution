#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double A, B;
	cin >> A >> B;
	double M = (B - A) / 400.0;
	double POW = 1.0 / (1.0 + pow(10, M));
	cout << POW;
}