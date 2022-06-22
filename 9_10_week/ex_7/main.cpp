#include <iostream>

using namespace std;
//Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг:
//значение A переходит в C, значение C — в B, значение B — в A (A, B, C —
//вещественные параметры, являющиеся одновременно входными и выходными). С
//помощью этой процедуры выполнить левый циклический сдвиг для двух данных
//наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2)
void  ShiftRight3(float A,float B,float C,float k){
    k=C;
    C=A;
    A=B;
    B=k;
    cout << A << B << C << endl;

}
int main()
{
    ShiftRight3(3,5,1,0);
    return 0;
}
