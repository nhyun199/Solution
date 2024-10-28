#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> captin;
    
    for(int i = 0; i < N; i++)
    {
        string name;
        cin >> name;
        
        if(name.length() == 3)
            captin.push_back(name);
    }
    sort(captin.begin(), captin.end());
    
    cout << captin[0];
}