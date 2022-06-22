#include <iostream>
#include <cmath>

using namespace std;

void function(){
    for(int i=-10;i<10;i++){
        if(i>5){
            cout << "X = " << i << " Y = " << 3*i-5 << endl;
        }
        if(i==5){
            cout << "X = " << i << " Y = " << 10 << endl;
        }
        if(i<5){
            cout << "X = " << i << " Y = " << 2*abs(i-2)+5 << endl;
        }
    }
}
int main()
{
    function();
    return 0;
}
