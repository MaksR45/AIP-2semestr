#include <iostream>

using namespace std;

int main()
{
    int n=1;
    int value=1;
    cout << "Enter n" << endl;
    cin >> n;
    for(int i=1;i<n;i++){
        value=value*i;
    }
    cout << value;
    return 0;
}
