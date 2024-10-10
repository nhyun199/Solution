#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxS = 0;
    
    for(int i = 0; i < n; i++)
    {
        int h, w;
        cin >> h >> w;
        int S = h * w;
        if(S > maxS)
            maxS = S;
    }
    cout << maxS;
}