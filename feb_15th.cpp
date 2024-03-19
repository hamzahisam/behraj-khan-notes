#include<iostream>
using namespace std;

class A{
    public:
    void fun1(){
        cout<<"I am fun";
    }

    protected:
    void fun2(){
        cout<<"I am also fun";
    }
    private:
    int x;
};

class B:  public A{
    private:
    int y;

    public:
    void fun_B(){
        fun1();
        fun2();
    }
};

int main(){
    A obj1;
    B obj;

    obj.fun1();
    obj.fun_B();
}
