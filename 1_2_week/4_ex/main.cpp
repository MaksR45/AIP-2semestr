#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x=1, a=0.1, b=0.2;
    cout << sqrt(x*x+b)-(b*b*pow(sin(x+a),3)) << endl;
    return 0;
}
