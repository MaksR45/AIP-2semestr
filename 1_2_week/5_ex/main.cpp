#include <iostream>

using namespace std;

int main()
{
    int begin=1, val;
    cout << "1-Bar, 2-Pascal, 3-F/S" << endl; //просим ввести начальную величину
    cin >> begin;
    cout << "Value - ";
    cin >> val;
    switch (begin) {
    case 1:
        cout << "Pascal - " << val*100000<< "   F/S - " << val*14.5 << endl;
        break;

    case 2:
        cout << "Bar - " << val*0.00001<< "   F/S - " << val*0.00015 << endl;
        break;

    case 3:
        cout << "Pascal - " << val*6894.76 << "   Bar - " << val*0.069 << endl;
        break;

    default:
        cout << "Unknown" << endl;
        break;
    }
    return 0;
}
