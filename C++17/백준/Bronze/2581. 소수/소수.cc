#include <iostream>
using namespace std;

int main()
{
    int M, N;
    int sum = 0;
    int min = 0;
    cin >> M >> N;
    
    for(int i = M; i <= N; i++)
    {
        if(i < 2)
            continue;
        
        bool isPrime = true;
        for(int j = 2; j <= i-1; j++)
        {
            if(i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        
        if(isPrime)
        {
            sum += i;
            if(min == 0)
                min = i;
        }
    }
    
    if(min == 0)
        cout << "-1";
    else
        cout << sum << '\n' << min;
}