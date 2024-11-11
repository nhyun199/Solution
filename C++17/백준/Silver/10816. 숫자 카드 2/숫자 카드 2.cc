#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int M;
    vector<int> have;
    cin >> M;
    for(int i = 0; i < M; i++)
    {
        int m;
        cin >> m;
        have.push_back(m);
    }
    sort(have.begin(), have.end());
    
    int N;
    vector<int> find;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        find.push_back(n);
    }
    
    for(int i = 0; i < N; i++)
    {
        auto first = lower_bound(have.begin(), have.end(), find[i]);
        auto last = upper_bound(have.begin(), have.end(), find[i]);
        int count = last - first;
        cout << count << ' ';
    }
}