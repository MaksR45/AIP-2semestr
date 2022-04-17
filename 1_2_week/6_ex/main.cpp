#include <iostream>

using namespace std;

int main()
{
    int begin=1;
    float n1,n2;
    cout << "1-'+', 2-'-'" << endl; //просим ввести начальную величину
    cin >> begin;
    cout << "First number - ";
    cin >> n1;
    cout << "Second number - ";
    cin >> n2;
    switch (begin) {
    case 1:
        cout << "Sum = " << n1+n2<< endl;
        break;

    case 2:
        cout << "Different - " << n1-n2<<endl;
        break;

    default:
        cout << "Unknown" << endl;
        break;
    }
    return 0;
}
