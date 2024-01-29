#include<iostream>
#include<typeinfo>
using namespace std;

class cars {
    public :
    virtual void car_type() = 0;
};

class sport : public cars {
    public :
    void car_type(){
        cout << "Sport" << endl;
    }
};

class race : public cars {
    public :
    void car_type(){
        cout << "Race" << endl;
    }
};

int main() {
    cars *car[] = { new sport() , new race() , new sport() , new race() }; 
    for ( int i =0 ; i<4 ; i++ ) {
        car[i]->car_type();

        if(typeid(*car[i]) == typeid(sport) ) {
            sport *sport_car = dynamic_cast<sport*>(car[i]);

            if(typeid(*sport_car) == typeid(sport) ) {
                cout<<"*Sport*" << endl;
            }
        };
    }
    return 0;
}
