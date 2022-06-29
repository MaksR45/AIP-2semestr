#include <iostream>
#include <cmath>

using namespace std;

float function(float X){
        if(X>5){
            return 3*X-5;
        }
        if(X==5){
            return 10;
        }
        if(X<5){
            return 2*abs(X-2)+5;
        }
}
int main()
{
    float X;
    cin >> X;
    cout << "X = " << X << " Y = " << function(X) << endl;
    return 0;
}
