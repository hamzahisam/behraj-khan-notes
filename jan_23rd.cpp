#include<iostream>
using namespace std;
/*
class bankAccount{
    private:
    double balance;

    public:
    void deposit(double bal){
        balance += bal;
    }

    double getBalance(){
        return balance;
    }
};

int main(){
    bankAccount acc1;
    acc1.deposit(50.5);
    cout<< acc1.getBalance();
}
*/

class student{
    public:
    int rollNo;
    char *name;

    inline void getData(int roll, char *Name);
    
    void display(){
        cout<< rollNo << endl;
        cout<< name;
    }
};

inline void student:: getData(int roll, char *Name){
    rollNo = roll;
    name = Name;
}

int main(){
    student s1;
    s1.getData(29015, "Ibad");
    s1.display();
}
