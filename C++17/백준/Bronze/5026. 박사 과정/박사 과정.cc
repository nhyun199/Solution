#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string question;
        cin >> question;

        
        if (question == "P=NP") 
        {
            cout << "skipped" << endl;
        } 
        else 
        {
            int oper = question.find("+");
            int a = stoi(question.substr(0, oper));  
            int b = stoi(question.substr(oper + 1));
            cout << a + b << endl;
        }
    }

    return 0;
}
