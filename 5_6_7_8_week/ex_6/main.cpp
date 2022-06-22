#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int value=0;
    int pow=0;
    cout << "Enter n" << endl;
        cin >> n;
    cout << "Enter value" << endl;
        cin >> value;
    pow=value;
    for(int i=1;i<n;i++){
        pow=pow*value;
    }
    cout << pow;
    return 0;
}
