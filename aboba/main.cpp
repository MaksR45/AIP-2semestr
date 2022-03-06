#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int  valu;
    cout << "1 dlya yravnenia, 2 dlya proverki tochki v oblasti" << endl;
    cin >> valu;
    ;
    switch (valu) {
    case 1:
        float x;
        cout << "Intput number" << endl;
        cin >> x;
            if(x > 7){
        cout << "Y=" << (2*x*x)-3 << endl;
            }
            if(x == 7){
        cout << "Y=" << 0;
            }
            if(x < 7){
        cout << "Y=" << 2*abs(x)+3 << endl;
            }
        return 0;
        break;
    case 2:
        float x1,y;
        cout << "Vvedi X, Y" << endl;
        cin >> x1;
        cin >> y;
        if((x1*x1)+(y*y) < 5 && (x1>0 || y > (-1*x1)) ){
            cout << "V diapazone";
        }
        else
        {
            cout << "Vne diapazona";
        }
        break;
    default:

        cout << "Unknown" << endl;
        break;
    }}
