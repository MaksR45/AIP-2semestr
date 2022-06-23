#include <iostream>
#include <cmath>
using namespace std;
/*6. Имеется информация о датчиках: диапазон измеряемых значений (min, max),
погрешность, максимальная скорость. Вывести данные о самом точном датчике.*/
struct sensor{
    float min,max;
    float pogresh;
    float speed;
};

void ShowImportant(sensor a, sensor b){
    if(b.pogresh>a.pogresh){
        cout << "Min = " << a.min << "\nMax = " << a.max << "\nPogreshnost = " << a.pogresh << "\nSpeed = " << a.speed;
    }
    else
        cout << "Min = " << b.min << "\nMax = " << b.max << "\nPogreshnost = " << b.pogresh << "\nSpeed = " << b.speed;
}
int main()
{
    sensor first,second;
    cout << "Enter min1 and max1" << endl;
    cin >> first.min >> first.max;
    cout << "Pogreshnost1" << endl;
    cin >> first.pogresh;
    cout << "Speed1" << endl;
    cin >> first.speed;

    cout << "Enter min2 and max2" << endl;
    cin >> second.min >> second.max;
    cout << "Pogreshnost2" << endl;
    cin >> second.pogresh;
    cout << "Speed2" << endl;
    cin >> second.speed;
    ShowImportant(first,second);
    return 0;
}
