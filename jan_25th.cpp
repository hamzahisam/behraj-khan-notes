#include<iostream>
using namespace std;

/*
class bankAccount{
    private:
    double balance;

    public:

    bankAccount(double bal){
        balance += bal;
    }
};

int main(){
    bankAccount acc1(50.5);
}
*/

class student{
    public:
    int rollNo;
    string name;

    student(){
        rollNo = 29015;
        name = "Ibad";
    }

    void display(){
        cout<< rollNo << endl;
        cout<< name << endl;
    }
};

int main(){
    student s1;
    s1.display();
}