#include <iostream>

using namespace std;
/*f. Напишите функцию, которая будет сравнивать вещественную часть
комплексного числа.*/

struct Komplex{
    float nast,mnim;
};
void sravni(Komplex a, Komplex b){
    if(a.nast>b.nast){
        cout << "First number bigger" << endl;
    }
    else
        cout << "Second number bigger" << endl;
}
int main()
{
    Komplex first,second;
    cout << "Enter first number" << endl;
    cin >> first.nast >> first.mnim;
    cout << "Enter second number" << endl;
    cin >> second.nast >> second.mnim;
    sravni(first,second);
    return 0;
}
