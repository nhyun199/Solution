#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++)
    {
        int a, b;
        int GCM = 0;
        cin >> a >> b;
        int x = a < b ? a : b;
        
        for(int j = 1; j <= x; j++)
        {
            if(a % j == 0 && b % j == 0 && GCM < j)
                GCM = j;
        }
        int LCM = GCM * (a/GCM) * (b/GCM);
        cout << LCM << ' ' << GCM << '\n';
    }
}