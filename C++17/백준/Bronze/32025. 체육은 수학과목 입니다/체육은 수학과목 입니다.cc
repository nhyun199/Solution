#include <iostream>
using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;
    int N = H < W ? H : W;
    int rad = N * 100 / 2;
    cout << rad;
}