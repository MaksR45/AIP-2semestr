#include <iostream>
#include <array>
#include <cmath>

using namespace std;

/*20. Имеется информация об N членах спортивной секции: фамилия, возраст, рост.
Ввести информацию о каждом.*/

struct Member{
    int surname;//да я знаю что фамилия стринг, но вводить фамилию каждому лень+какая разница если фамилия служит для индетификации человека
    int height;
    int age;
};

void ZapolniArray(array <Member, 10> &people){
    for(int i = 0;i<10;i++){
        people[i].age = (rand() % 4) + 14;
        people[i].height = (rand() % 26) + 160;
        people[i].surname = (rand() % 100) + 1000;
    }
}

void SayTall(array <Member, 10> people){ //a. Напечатать фамилию самого высокого.
    int thehighest=0,surnamethehugiest;
    for(int i=0;i<10;i++)
        if(thehighest<people[i].height){          //изначально я хотел чтобы при выполнении условия в отдельную переменную записывался номер высокого чела, а потом решил что лучше будет записываться сама фамилия
            thehighest=people[i].height;
            surnamethehugiest=people[i].surname;
        }
    cout << "The highest member = " << surnamethehugiest << "\nHis height = " << thehighest << "\n\n" << endl;
}

void SayWhoOlderAverage(array <Member, 10> people){ //b. Напечатать фамилии и возраст чей возраст выше среднего.
    float averageAge = 0;
    for(int i = 0;i<10;i++){
        averageAge = averageAge+people[i].age;
    }
    averageAge = averageAge / 10;
    cout << "Average age = " << averageAge << "\n" <<endl;
    for(int i = 0;i<10;i++){
        if(people[i].age>averageAge){
            cout << "Surname = " << people[i].surname <<endl;
            cout << "Age = " << people[i].age << "\n" <<endl;
        }
    }
    cout << "\n\n" << endl;
}

void SayWhoYoungerAverageandHigherAverage(array <Member, 10> people){ //c. Напечатать информацию о тех чей возраст ниже среднего, а рост выше среднего по секции.
    float averageAge = 0,averageHeight;
    for(int i = 0;i<10;i++){
        averageAge = averageAge+people[i].age;
    }
    averageAge = averageAge / 10;

    for(int i = 0;i<10;i++){
        averageHeight = averageHeight+people[i].height;
    }
    averageHeight = averageHeight / 10;

    cout << "Average age = " << averageAge <<endl;
    cout << "Average height = " << averageHeight << "\n" <<endl;

    for(int i = 0;i<10;i++){
        if(people[i].age<averageAge && people[i].height>averageHeight){
            cout << "Surname = " << people[i].surname <<endl;
            cout << "Age = " << people[i].age << endl;
            cout << "Height = " << people[i].height << "\n" <<endl;
        }
    }
    cout << "\n\n" << endl;
}
int main(){
    array <Member, 10> sportmembers;
    srand(4);
    ZapolniArray(sportmembers);
    SayTall(sportmembers);
    SayWhoOlderAverage(sportmembers);
    SayWhoYoungerAverageandHigherAverage(sportmembers);
    return 0;
}
