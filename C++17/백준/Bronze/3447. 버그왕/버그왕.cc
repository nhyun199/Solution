#include <iostream>
#include <string>
using namespace std;

int main()
{
    string BUG = "BUG";
    string source;
    
    while(getline(cin, source))
    {
        while(source.find(BUG) != string::npos)
        {
            source.erase(source.find(BUG), 3);
        }
        
        cout << source << '\n';
    }
}