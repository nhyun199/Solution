#include <iostream>
using namespace std;

int main()
{
    int Case;
    cin >> Case;
    
    for(int i = 0; i < Case; i++)
    {
        int N, M;
        cin >> N >> M;
        int T = N - M;
        int U = 2*M - N;
        cout << U << ' ' << T << '\n';
    }
}