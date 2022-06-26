#include <iostream>
#include <array>
#include <cmath>
using namespace std;
/*1. Преобразовать матрицу: элементы строки, в которой находится минимальный
элемент матрицы, заменить нулями.
3. В квадратной матрице, найти сумму отрицательных элементов, лежащих на главной
диагонали.*/

void ZapolniMatrix(int mat[11][11]){
    for(int i=0;i<11;i++){
        for(int j=0;11>j;j++){
            mat[i][j]=(rand()%50)-25;
        }
    }
}

void ZerosRowsWhereMin(int mat[11][11]){//мне не нужно было делать это задание, но я поздно увидел, что мне не надо его делать
    int min=mat[1][1], minr=0;          //поэтому пусть оно тут будет потому что оно работает.
    for(int i=0;i<11;i++){
        for(int j=0;j<11;j++){
            if(min>mat[i][j]){
                min=mat[i][j];
                minr=i;
            }
        }
    }
    for(int j=0;j<11;j++){
        mat[minr][j]=0;
    }
}

void SumMinusElementsonMainDiag(int mat[11][11]){
    int sumMinus=0;
    for(int i=0;i<11;i++){
        if(mat[i][i]<0){
            sumMinus += mat[i][i];
        }
    }
    cout << "Sum = " << sumMinus << endl;
}
void ShowMatrix(int mat[11][11]){
    for(int i=0;i<11;i++){
        for(int j=0;11>j;j++){
            cout << mat[i][j]<< "\t";
        }
        cout << "\n";
    }
    cout << "\n";
}
int main()
{
    int numbers[11][11];
    srand(39);
    ZapolniMatrix(numbers);
    ShowMatrix(numbers);
    SumMinusElementsonMainDiag(numbers);
    ShowMatrix(numbers);
    return 0;
}
