#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int count = 0;
    float value = 0;
    cout << "Enter the last member " ;
        cin >> count;
    cout << "\nEnter x ";
            cin >> value;
    for (int i =0;i<count;i++){
        value=value+(pow(value,i)/(i+1));
    }
    cout << "End number is " << value;
}
