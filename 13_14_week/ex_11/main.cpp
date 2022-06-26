#include <iostream>
#include <array>
#include <cmath>

using namespace std;
/*11. Вывести элементы массива, меньших среднего арифметического*/

void ZapolniMassiv(array <int, 20> &nums){
    for(int i=0;i<20;i++){
        nums[i] = (rand() % 21) - 10;
    }
    for(int i=0;i<20;i++){
        cout << nums[i] << endl;
    }
}

void countMinSred(array <int, 20> nums){
    int count;
    float sred=0;
    for(int i=0;i<20;i++){
            count++;
            sred=sred+nums[i];
    }
    cout << sred/count << endl;
    for(int i=0;i<20;i++){
        if(nums[i]<(sred/count)){
            cout << "\n" << nums[i];
        }
    }

}

int main()
{
    srand(10);
    array <int,20> numstwenty;
    ZapolniMassiv(numstwenty);
    countMinSred(numstwenty);
    return 0;
}
