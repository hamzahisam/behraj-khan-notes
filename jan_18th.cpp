#include<iostream>
using namespace std;

/*class car{
    public:
    string color;
    string model;
    int year;
    double mileage;

    void display(){
        cout<<"Start the car\n";
    }
};

int main(){
    car ibad;
    ibad.color = "blue";
    ibad.model = "khan";
    ibad.year = 2002;
    ibad.mileage = 0.76;

    ibad.display();
    cout<<ibad.mileage << endl;

    if(ibad.mileage < 20){
        cout<<"Replace car";
    }

}
*/

class bank_Acc{
    double balance;

    public:
    void deposit(double amount){
        balance += amount;
    }

    double getBalance(){
        return balance;
    }
};

int main(){
    bank_Acc obj;
    obj.deposit(50.5);
    cout<<obj.getBalance();
}