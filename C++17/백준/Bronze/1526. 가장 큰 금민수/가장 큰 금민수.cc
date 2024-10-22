#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int max = 4;
    
    for(int i = 4; i <= N; i++)
    {
        bool isTrue = true;
        for(char c : to_string(i))
        {
            if(c != '4' && c != '7')
            {
                isTrue = false;
                break;
            }
            else
                isTrue = true;
        }
        
        if(isTrue)
        {
            if(max < i)
               max = i;
        }
    }
    cout << max;
}