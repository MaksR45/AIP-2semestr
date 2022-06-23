#include <iostream>

using namespace std;
/*11. Робот-автомобиль описывается как структура с полями: скорость, длительность
движения и номер. Напишите функцию для расчёта пройденного расстояния.*/

struct AutoRobotic{
    float speed;
    int number;
    int time;
};

float SayDistance(AutoRobotic a){
    return a.speed*a.time;
}

int main()
{
    AutoRobotic first;

    cout << "Enter speed, number and time" << endl;
    cin >> first.speed >> first.number >> first.time;
    cout << "Ekipaj " << first.number << " proshol " << SayDistance(first);
    return 0;
}
