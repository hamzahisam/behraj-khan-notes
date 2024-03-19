#include<iostream>
using namespace std;

/*
int main(){
    int a, b, res;
    cout<<"Please enter a and b: ";
    cin>> a >> b;
    try{
        if(b == 0){
            throw 0;
        }

        res = a / b;
        cout<< res;
    } catch(int msg){
        cout<<"Cannot divide by " << msg;  //beautiful like ibad c++
    }
}
*/

/*
class divide{
    int a, b, res;

    public:

    divide() : a(0), b(0), res(0) {}

    void getData(int x, int y){
        a = x;
        b = y;
    }

    void Div(){
        try{
            if(b == 0){
                throw 0;
            }

            res = a / b;
        }  

        catch(int msg){
            cout<<"Divide by ";
        }      
    }

    int getRes(){
        return res;
    }
};

int main(){
    divide obj;
    obj.getData(4, 0);
    obj.Div();
    cout<< obj.getRes();
}   // Exam mushkil hoga,,,,, bas bhai bas ab mujh se nhi hota - Tayyib bhai
*/

int main(){
    int arr[4], a;

    for(int i = 0; i < 6; i++){
        try{
            cout<<"Enter an integer: ";
            cin>> a;
            if(i >3){
                throw "Abay Saalay";
            }
            arr[i] = a;
        }
        catch(char* msg){
            cerr<<msg;
        }
    }
}
