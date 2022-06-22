#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float R,count,width,minR;
    cout << "Enter count " << endl;
    cin >> count;
    cout << "Enter width " << endl;//в миллиметрах
    cin >> width;
    cout << "Enter minR " << endl;//в миллиметрах
    cin >> minR;
    R=(minR+(count*width))/1000;
    cout << (4*M_PI*pow(R,3)/3)*1000;
    return 0;
}
