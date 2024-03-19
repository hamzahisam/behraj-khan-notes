#include<iostream>
using namespace std;

/*
class A{
    public:

    int x;
    void getX(){
        cout<<"Please enter x: ";
        cin>> x;   
    }
};

class B: public A{
    public:

    int y;
    void getY(){
        cout<<"Please enter y: ";
        cin>> y;
    }

    int sum(){
        return x + y;
    }
};

class C: public B{
    public:

    int z;
    C(): z(5){};
    int product(){
        return z * x * y;
    }
};

int main(){   // int ibad(){ cout<< "Ibad C++!!!!!";}
    B s1;
    s1.getX();
    s1.getY();
    cout<<"The sum of x and y is " << s1.sum() << endl;
    C s2;
    s2.x = s1.x;
    s2.y = s1.y;
    cout<<"The x * y * 5 is: " << s2.product();
}
*/

class A{
    public:

    int x;
    void getX(){
        cout<<"Please enter x: ";
        cin>> x;   
    }
};

class B{
    public:

    int y;
    void getY(){
        cout<<"Please enter y: ";
        cin>> y;
    }
};

class C: public A, public B{
    public:

    int z;
    C(): z(5){};
    int product(){
        return z * x * y;
    }

    int sum(){
        return x + y;
    }
};

int main(){   // int ibad(){ cout<< "Ibad C++!!!!!";}
    C s1;
    s1.getX();
    s1.getY();
    cout<< s1.sum() << endl;
    cout<<"The x * y * 5 is: " << s1.product();
}