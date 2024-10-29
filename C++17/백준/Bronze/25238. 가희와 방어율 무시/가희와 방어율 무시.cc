#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double defense = a - (a * b/100);
    if(defense >= 100)
        cout << 0;
    else
        cout << 1;
}