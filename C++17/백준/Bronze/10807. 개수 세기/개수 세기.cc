#include <iostream>
using namespace std;

int main()
{
    int N;
    int v;
    int correct = 0;
    cin >> N;
    int* A = new int[N];
    
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    
    cin >> v;
    
    for(int i = 0; i < N; i++)
    {
        if(v == A[i])
            correct++;
    }
    cout << correct;
}