#include <iostream>

using namespace std;

int main()
{
    float min;
    float max;
    float step;
    cout << "Enter min" << endl;
        cin >> min;
    cout << "Enter max" << endl;
        cin >> max;
    cout << "Enter step" << endl;
        cin >> step;
        cout << min <<" ";
        while(!(max==min)){
            min=min+step;
            cout << min << " ";
        }
    return 0;
}
