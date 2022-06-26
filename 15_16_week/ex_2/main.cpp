#include <iostream>

using namespace std;

/*5. В квадратной матрице для каждой строки найти минимальный элемент и
переставить его с элементом, стоящим в этой строке на главной диагонали.*/

void ZapolniMatrix(int mat[11][11]){
    for(int i=0;i<11;i++){
        for(int j=0;11>j;j++){
            mat[i][j]=(rand()%50)-25;
        }
    }
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

void ReverseMinElementandMainDiag(int  mat[11][11]){
    int numberMin,changeElements,minE/*craft*/;
    for(int i=0;i<11;i++){
        minE=mat[i][1];
        for(int j=0;11>j;j++){
            if(mat[i][j]<minE){
                minE=mat[i][j];
                numberMin=j;
            }
        }
        changeElements=mat[i][i];
        mat[i][i]=minE;
        mat[i][numberMin]=changeElements;
    }
}

int main()
{
    int numbers[11][11];
    ZapolniMatrix(numbers);
    ShowMatrix(numbers);
    ReverseMinElementandMainDiag(numbers);
    ShowMatrix(numbers);
    return 0;
}
