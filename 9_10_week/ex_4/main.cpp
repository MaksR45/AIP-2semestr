#include <iostream>

using namespace std;

void Swap(float &X, float &Y){
    float ch;
    ch=X;
    X=Y;
    Y=ch;
}

int main()
{
    int X,Y;
    Swap(X,Y);
    cout << X << " "<< Y << endl;
    return 0;
}
