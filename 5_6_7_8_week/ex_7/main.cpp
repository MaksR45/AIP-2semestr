#include <iostream>

using namespace std;

int main()
{
    int A,count;
    count = 0;
    cin >> A;
    for(int i=100;i<999;i++){
        int sravn=( i/100 + (( i - ((i/100)*100) )/10)+i%10);
        if(sravn==A)
            count++;
    }
    cout << "Value is " << count << endl;
    return 0;
}
