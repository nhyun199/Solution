#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int money = N * 100;
    
    if(money >= M)
        cout << "Yes";
    else
        cout << "No";
}