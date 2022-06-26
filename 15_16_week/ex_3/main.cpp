#include <iostream>
#include <cmath>
using namespace std;
/*8. Дана матрица. Элементы первой строки — мощность электромотора, второй строки
— категория мотора (число от 1 до 3). Найти самый мощный мотор категории 3.*/

void ZapolniKatalog(int kat[2][10]){
    for(int j=0;j<10;j++){
        kat[0][j]=rand()%100+1;
        kat[1][j]=rand()%3+1;
    }
}

void ShowMatrix(int mat[2][10]){
    for(int i=0;i<2;i++){
        for(int j=0;10>j;j++){
            cout << mat[i][j]<< "\t";
        }
        cout << "\n";
    }
    cout << "\n";
}

int theBestEngine3klass(int kat[2][10]){
    int theBestPower=0;
    for(int j=0;j<10;j++){
        if(kat[1][j]==3){
            if(theBestPower<kat[0][j]){
                theBestPower=kat[0][j];
            }
        }
    }
    return theBestPower;
}


int main()
{
    srand(39);
    int katalogofEngines[2][10];
    ZapolniKatalog(katalogofEngines);
    ShowMatrix(katalogofEngines);
    cout << "\nThe best power = " << theBestEngine3klass(katalogofEngines) << endl;
    return 0;
}
