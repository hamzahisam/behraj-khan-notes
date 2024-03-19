#include<iostream>
using namespace std;

/*
class cal{
    public:
    int sum(int a, int b){
        return a + b;
    }

    double sum(double a, double b){
        return a + b;
    }

    int sum(int a, int b, int c){
        return a + b + c;
    }
};

class shape{
    public:
    virtual void draw(){
        cout<<"I'm in shape draw()";
    }
};

class circle: public shape{
    public:
    void draw(){
        cout<<"I'm circle draw()" << endl;
    }
};

class square: public shape{
    public:
    void draw(){
        cout<<"I'm in square";
    }
};

int main(){
    cal obj1;
    cout<< obj1.sum(5, 5, 5) << endl;
    cout<< obj1.sum(5.5, 6.5) << endl;

    circle obj;
    //obj1.draw();

    shape* ptr;
    ptr = &obj;
    ptr->draw();
    square obj2;
    ptr = &obj2;
    ptr->draw();
}
*/

class cal{
    public:
    virtual int perform(int, int){

    }
};

class sum: public cal{
    int perform(int a, int b){
        return a + b;
    }
};

class sub: public cal{
    public:
    int perfrom(int a, int b){
        return a - b;
    }
};

int main(){
    cal* ptr;
    sub obj;
    ptr = &obj;
    cout<< ptr->perform(7, 5);
}