#include <iostream>

using namespace std;
/*Описать функцию IsPower5(K) логического типа, возвращающую TRUE, если целый
параметр K (> 0) является степенью числа 5, и FALSE в противном случае. С ее
помощью найти количество степеней числа 5 в наборе из 10 целых положительных
чисел.*/
bool IsPower5(int K){
    int n=1;
    while(K>n){
        n=n*5;
    }
    return n==K;
}

int main()
{
   if(IsPower5(125))
       cout << "Yes";
   else
       cout << "no";
    return 0;
}
