#include <iostream>
using namespace std;

int atSign(int A, int B)
{
    return (A+B)*(A-B);
}

int main()
{
    int A, B;
    cin >> A >> B;
    cout << atSign(A, B);
}