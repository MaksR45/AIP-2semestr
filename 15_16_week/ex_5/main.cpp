#include <iostream>

using namespace std;
/*10. Реализовать сложение, вычитание, умножение, транспонирование матриц
(разрешается фиксированный размер матриц)*/

//Сделал только вычитание, сложение,транспонирование так как не хватает информации чтобы сделать умножение(на данный момент)
void ZapolniMatrix(int mat[10][10]){
    for(int i=0;i<10;i++){
        for(int j=0;10>j;j++){
            mat[i][j]=rand()%30;
        }
    }
}

void ShowMatrix(int mat[10][10]){
    for(int i=0;i<10;i++){
        for(int j=0;10>j;j++){
            cout << mat[i][j]<< "\t";
        }
        cout << "\n";
    }
    cout << "\n";
}

void makeSum(int a[10][10],int b[10][10],int c[10][10]){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}

void makeSubtraction(int a[10][10],int b[10][10],int c[10][10]){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            c[i][j]=a[i][j]-b[i][j];
        }
    }
}

void makeTransposition(int a[10][10]){
    int b[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;10>j;j++){
            b[i][j]=a[i][j];
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;10>j;j++){
            a[i][j]=b[j][i];
        }
    }
}

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
