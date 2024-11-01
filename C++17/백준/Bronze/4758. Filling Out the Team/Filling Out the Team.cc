#include <iostream>
using namespace std;

int main()
{
    double speed;
    int weight;
    int strength;

    while (true)
    {
        cin >> speed >> weight >> strength;
        if (speed == 0 && weight == 0 && strength == 0)
            return 0;

        bool positionFound = false;

        if (speed <= 4.5 && weight >= 150 && strength >= 200) {
            cout << "Wide Receiver ";
            positionFound = true;
        }
        
        if (speed <= 6.0 && weight >= 300 && strength >= 500) {
            cout << "Lineman ";
            positionFound = true;
        }
        
        if (speed <= 5.0 && weight >= 200 && strength >= 300) {
            cout << "Quarterback ";
            positionFound = true;
        }

        

        if (!positionFound) {
            cout << "No positions";  
        }

        cout << '\n';
    }
}
