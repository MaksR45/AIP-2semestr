#include <iostream>

using namespace std;
//Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг:
//значение A переходит в C, значение C — в B, значение B — в A (A, B, C —
//вещественные параметры, являющиеся одновременно входными и выходными). С
//помощью этой процедуры выполнить левый циклический сдвиг для двух данных
//наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2)
void  ShiftRight3(float &A,float &B,float &C){
    float k;
    k=C;
    C=A;
    A=B;
    B=k;

}
int main()
{
    float A=3,B=5,C=1;
    ShiftRight3(A,B,C);
    cout << A << B << C << endl;
    return 0;
}
