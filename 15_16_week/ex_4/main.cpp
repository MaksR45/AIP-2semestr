#include <iostream>

using namespace std;
/*9. Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
на экран матрицу, описывающую следующие сущности. Предложите свой вариант.
a. Двумерное изображение. Изображение состоит из пикселей. Каждый пиксель
характеризуется яркостью цветовых каналов: красный, синий, зелёный*/

/*Я по варианту должен был сделать задание b, но я его просто напросто не понял что там от меня требуется: если робот один зачем характеризовать каждую клетку*/

struct Pixel{
    int red,green,blue;
};

void ZapolniMatrix(Pixel img[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;5>j;j++){
            img[i][j].red=rand()%256;
            img[i][j].green=rand()%256;
            img[i][j].blue=rand()%256;
        }
    }
}

void ShowMatrix(Pixel img[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;5>j;j++){
            cout << "Red - " << img[i][j].red << "\t";
            cout << "Green - " << img[i][j].green << "\t";
            cout << "Blue - " << img[i][j].blue << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main()
{
    Pixel image[5][5];
    ZapolniMatrix(image);
    ShowMatrix(image);
    return 0;
}
