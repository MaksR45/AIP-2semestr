#include <iostream>

using namespace std;

void Swap(float X, float Y){
    float ch;
    ch=X;
    X=Y;
    Y=ch;
    cout << X << " "<< Y << endl;
}

int main()
{
    Swap(10,4.5);
    return 0;
}
