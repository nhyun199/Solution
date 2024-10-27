#include <iostream>
#include <string>
using namespace std;

int main()
{
    string keyward = "Simon says";
    int N;
    cin >> N;
    cin.ignore();
    
    for(int i = 0; i < N; i++)
    {
        string S;
        string result;
        getline(cin, S);
        
        if(S.find(keyward) != string::npos)
        {
            result = S.substr(S.find(keyward)+keyward.length());
            cout << result << '\n';
        }
    }
}