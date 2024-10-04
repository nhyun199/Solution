#include <iostream>
using namespace std;

long long atSign(long long A, long long B)
{
    return (A+B)*(A-B);
}

int main()
{
    long long A, B;
    cin >> A >> B;
    cout << atSign(A, B);
}