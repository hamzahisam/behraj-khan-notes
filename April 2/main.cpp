#include<iostream>
using namespace std;

template<typename T>
class addition{
public:
    T operator()(T a, T b){
        return a + b;
    }
};

template<typename T>
class subtraction{
public:
    T operator()(T a, T b){
        return a - b;
    }
};

template<typename T>
class multiplication{
public:
    T operator()(T a, T b){
        return a * b;
    }
};

template<typename T>
class division{
public:
    T operator()(T a, T b){
        return a / b;
    }
};
/*
int main(){
    int choice;
    cout<<"Arithmetic operations\n1:\tAddition\n2:\tsubtraction\n3:\tMultiplication\n4:\tDivision\n5:\tExit\n\nEnter choice: ";
    cin>> choice;
    
    double num1, num2;
    cout<<"Enter num1: ";
    cin>> num1;
    cout<<"Enter num2: ";
    cin>>num2;
    while(choice != 5){
        switch(choice){
            default:
                cout<<"Incorrect choice entered";
                break;
            case 1:
                addition<double> add;
                cout<< add(num1, num2);
                break;
                
            case 2:
                subtraction<double> sub;
                cout<< sub(num1, num2);
                break;
                
            case 3:
                multiplication<double> mul;
                cout<< mul(num1, num2);
                break;
                
            case 4:
                division<double> div;
                cout<< div(num1, num2);
                break;
                
                cout<<"Arithmetic operations\n1:\tAddition\n2:\tsubtraction\n3:\tMultiplication\n4:\tDivision\n5:\tExit\n\nEnter choice: ";
                cin>> choice;
                cout<<"Enter num1: ";
                cin>> num1;
                cout<<"Enter num2: ";
                cin>>num2;
                
            case 5:
                break;
                
        }
    }
}
*/
