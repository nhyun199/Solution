#include <iostream>
using namespace std;

int main()
{
    int S, M, L;
    cin >> S >> M >> L;
    int happiness = (1*S) + (2*M) + (3*L);
    if(happiness >= 10)
        cout << "happy";
    else
        cout << "sad";
}