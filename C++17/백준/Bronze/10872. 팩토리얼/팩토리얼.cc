#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int factorial = 1;
    
    if(N == 0 || N == 1)
        cout << 1;
    else
    {
        for(int i = 2; i <= N; i++)
        {
            factorial *= i; 
        }
        cout << factorial;
    }
        
}