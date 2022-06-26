#include <iostream>
#include <array>
#include <cmath>

using namespace std;
/*1. Сгенерировать массив со случайными числами в диапазоне:
f. [0,20]*/

void ZapolniMassiv(array <int, 20> &nums){
    for(int i=0;i<20;i++){
        nums[i] = rand() % 21;
    }
    for(int i=0;i<20;i++){
        cout << nums[i] << endl;
    }
}

int main()
{
    srand(1);
    array <int,20> numstwenty;
    ZapolniMassiv(numstwenty);
    return 0;
}
