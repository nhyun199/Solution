#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int rev(string n)
{
    reverse(n.begin(), n.end());
    int num = stoi(n);
    return num;
}

int main()
{
    string X, Y;
    cin >> X >> Y;
    cout << rev(to_string(rev(X) + rev(Y)));
}