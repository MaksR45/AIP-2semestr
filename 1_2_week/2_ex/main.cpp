#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r1,r2;
    cout << "Radius 1 kryga" << endl;
    cin >> r1;
    cout << "Radius 2 kryga" << endl;
    cin >> r2;
    cout << (M_PI*pow(r1+r2,2))/4;
    return 0;
}
