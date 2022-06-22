#include <iostream>
#include <cmath>

using namespace std;
// 2 f
int main()
{
    float raz,min,max;
    cout << "Enter step - ";
    cin >> raz;
    cout << "\nEnter min - ";
    cin >> min;
    cout << "\nEnter max - ";
    cin >> max;
    if(max<min)
        cout << "\nmin bigger than max";
    while(min<max){
        cout << "\nX-" << min << " Y-" << sqrt((1+3*min)/2)+3*min;//с минусом показывает NaN
        min=min+raz;
    }

    return 0;
}
