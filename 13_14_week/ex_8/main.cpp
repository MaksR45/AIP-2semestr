#include <iostream>
#include <array>
#include <cmath>

using namespace std;
/*8. Посчитать количество положительных/отрицательных элементов массива]*/

void ZapolniMassiv(array <int, 20> &nums){
    for(int i=0;i<20;i++){
        nums[i] = (rand() % 21) - 10;
    }
    for(int i=0;i<20;i++){
        cout << nums[i] << endl;
    }
}

void countPlusMinus(array <int, 20> nums){
    int countp=0,countm=0;
    for(int i=0;i<20;i++){
        if(nums[i]>0){
            countp++;
        }
        if(nums[i]<0){
            countm++;
        }
    }
    cout << "\n\n" <<countp << "  " << countm;
}

int main()
{
    srand(2);
    array <int,20> numstwenty;
    ZapolniMassiv(numstwenty);
    countPlusMinus(numstwenty);
    return 0;
}
