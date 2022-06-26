#include <iostream>
#include <array>
#include <cmath>

using namespace std;
/*Вычислить сумму элементов массива:
c. меньших 5, больших 6, меньших 4*/

void ZapolniMassiv(array <int, 10> &a){
    for(int i=0;i<10;i++){
        a[i] = rand() % 11;
    }
    for(int i=0;i<10;i++){
        cout << a[i] << endl;
    }
}
void sumMinFive(array <int, 10> a){

    int sum=0;
    for(int i=0;i<10;i++){
        if(a[i]<5){
            sum=sum+a[i];
        }
    }
    cout << "\n\n" << sum << endl;
}

void sumMaxSix(array <int, 10> a){

    int sum=0;
    for(int i=0;i<10;i++){
        if(a[i]>6){
            sum=sum+a[i];
        }
    }
    cout << "\n\n" << sum << endl;
}

void sumMinFour(array <int, 10> a){

    int sum=0;
    for(int i=0;i<10;i++){
        if(a[i]<4){
            sum=sum+a[i];
        }
    }
    cout << "\n\n" << sum << endl;
}

int main()
{
    array <int,10> numsten;
    srand(3);
    ZapolniMassiv(numsten);
    sumMinFive(numsten);
    sumMaxSix(numsten);
    sumMinFour(numsten);
    return 0;
}
