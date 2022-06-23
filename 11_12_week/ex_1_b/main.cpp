#include <iostream>

using namespace std;
/*b. Написать функцию, которая сравнивает два времени. Возвращает true, если
первый аргумент больше второго.*/
    struct Time{
        int hours,mins,secs;
    };

    bool sravn(Time a){
        return a.hours>a.mins;
    }
int main()
{
    Time first;
    cout << sravn(first);
    return 0;
}
