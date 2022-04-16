#include <iostream>

using namespace std;

int main()
{
    int val_day_week = 2,val_day_end;//Первая переменная используется чтобы считать недели
    cin >> val_day_end;
    int i=1;
    for(i;i<val_day_end;i++){
        val_day_week = val_day_week+1;
        if(val_day_week==7) val_day_week=0;
    }
    cout << val_day_week;
    return 0;
}
// 1  2  3  4  5  6  7
// Пн Вт Ср Чт Пт Сб Вс
// 30 1  2  3  4  5  6
// 7  8  9  10 11 12 13
// 14 15 16 17 18 19 20
// 21 22 23 24 25 26 27
// 28 29 30
