#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    map<string, int> captin;
    
    for(int i = 0; i < N; i++)
    {
        string name;
        cin >> name;
        
        if(name.length() == 3)
            captin.insert({name, i});
    }
    
    cout << captin.begin()->first;
}