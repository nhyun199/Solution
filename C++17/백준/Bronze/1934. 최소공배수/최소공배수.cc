#include <iostream>
using namespace std;

int gcd(int A, int B)
{
    while(B != 0)
    {
        int temp = B;
        B = A % B;
        A = temp;
    }
    return A;
}

int main()
{
    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int A, B;
        cin >> A >> B;
        cout << (A*B)/gcd(A, B) << '\n';
    }
}