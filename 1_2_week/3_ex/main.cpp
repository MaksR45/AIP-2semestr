#include <iostream>

using namespace std;

int main()
{
    float first, second, third;
    cin >> first >> second;
    third = first;
    first = second;
    second = third;
    cout << first <<" "<< second;
    return 0;
}
