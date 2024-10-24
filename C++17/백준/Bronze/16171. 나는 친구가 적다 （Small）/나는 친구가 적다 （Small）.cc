#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string S;
    string K;
    string origin;
    cin >> S;
    cin >> K;
    
    for(char a : S)
    {
        if(!isdigit(a))
            origin.push_back(a);
    }
    
   if(origin.find(K) != string::npos)
       cout << 1;
   else
       cout << 0;
}