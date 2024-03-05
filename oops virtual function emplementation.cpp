#include <iostream>
using namespace std;

class Vehaicle{
public:
    virtual void start();
    virtual void drive();
    virtual void stop();
};

class bike: public Vehaicle{
public:
    void start(){
        cout<<"Bike is started: "<<endl;
    }
    void drive(){
        cout<<"Let's drive the bike: "<<endl;
    }
    void stop(){
        cout<<"Apply the break: "<<endl;
    }
};

class car: public Vehaicle{
public:
    void start(){
        cout<<"car is started: "<<endl;
    }
    void drive(){
        cout<<"Let's drive the car: "<<endl;
    }
    void stop(){
        cout<<"Apply the break: "<<endl;
    }
};

int main() {

    car c1;
    bike b1;
    
    Vehaicle* v1 = &c1;
    Vehaicle* v2 = &b1;

    v1->start();
    v1->drive();
    v1->stop();
    cout<<endl;
    v2->start();
    v2->drive();
    v2->stop();

    (*v1).start();
    (*v1).drive();
    (*v1).stop();

    return 0;
}



