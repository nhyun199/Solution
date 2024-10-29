#include <iostream>
#include <map>
using namespace std;
int board[1002][1002];

int main()
{
    int N;
    cin >> N;
    int x, y, w, h;
    
    for(int i = 1; i <= N; i++)
    {
        cin >> x >> y >> w >> h;
        for(int a = x; a < x+w; a++)
        {
            for(int b = y; b < y+h; b++)
            {
                board[a][b] = i;
            }
        }
    }
    
    for(int i = 1; i <= N; i++)
    {
        int sum = 0;
        for(int a = 0; a < 1002; a++)
        {
            for(int b = 0; b < 1002; b++)
            {
                if(board[a][b] == i)
                    sum++;
            }
        }
        cout << sum << '\n';
    }
}