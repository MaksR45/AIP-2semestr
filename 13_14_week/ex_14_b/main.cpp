#include <iostream>
#include <array>
#include <cmath>

using namespace std;
/*14. Создать новый массив из двух других массивов путём операций над элементами
массивов
b. вычитания*/

void ZapolniArray(array <int, 20> &nums){
    for(int i=0;i<20;i++){
        nums[i] = (rand() % 21) - 10;
    }
    for(int i=0;i<20;i++){
        cout << nums[i] << "\t";
    }
    cout << "\n" << endl;
}

void minusArray(array <int, 20> a,array <int, 20> b,array <int, 20> c){
    for(int i = 0;i<20;i++){
        c[i] = a[i]-b[i];
        cout << c[i] << "\t";
    }
    cout << "\n" << endl;

}

int main()
{
    srand(2);
    array <int,20> numsOne,numsTwo,numsEnd;
    ZapolniArray(numsOne);
    srand(3);
    ZapolniArray(numsTwo);
    minusArray(numsOne,numsTwo,numsEnd);
    return 0;
}
