#include <iostream>
using namespace std;

int fibonachi(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    
    int fibo[46];
    fibo[0] = 0;
    fibo[1] = 1;
    
    for(int i = 2; i <= n; i++)
        fibo[i] = fibo[i-1] + fibo[i-2];
    return fibo[n];
}

int main()
{
    int n;
    cin >> n;
    cout << fibonachi(n);
}
