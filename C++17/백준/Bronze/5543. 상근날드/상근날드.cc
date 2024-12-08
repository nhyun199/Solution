#include <iostream>
using namespace std;

int main()
{
    int bugar[3];
    int beverage[2];
    int set;
    int min = 10000;
    cin >> bugar[0] >> bugar[1] >> bugar[2] >> beverage[0] >> beverage[1];
    
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            set = bugar[i] + beverage[j] - 50;
            if(min > set)
                min = set;
        }
    }
    cout << min;
}