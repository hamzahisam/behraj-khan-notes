#include<iostream>
using namespace std;

/*
class ab{
    public:
    virtual void draw() = 0;
};

class cd: public ab{
    public:
    void draw(){
        cout<<"Draw circle";
    }
};

int main(){
    //ab obj;   //Super Ibad
    cd obj1;
    obj1.draw();
}
*/

class Base{
    public:
    virtual void draw(){
        cout<<"Base\n";
    }
};

class Derived: public Base{
    public:
    void draw(){
        cout<< "Derived\n";
    }
};

class Derived1: public Base{
    public:
    void draw(){
        cout<<"Derived1";
    }
};

int main(){
    Base* base = new Derived();
    base->draw();

    Base ibad;
    ibad.draw();
    Derived* derived = dynamic_cast<Derived*>(base);
    derived->draw();


    //Derived obj;
    //Derived1* obj1;
    //Base* ptr = &obj;

    //Derived1* obj1 = dynamic_cast<Derived1*>(ptr);
    //obj1->draw();

    /*
    Base* ptr;
    Derived obj;
    ptr = &obj;
    ptr->draw();
    */
    
}