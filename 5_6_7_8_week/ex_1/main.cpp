#include <iostream>

using namespace std;

int main()
{
    int n=0;
    cin >> n;
    for(int i = 0;i<n;i++){
        cout << "" << endl;
        for(int j = -1;j<i;j++){
        cout << "0";
        }
    }
    return 0;
}
