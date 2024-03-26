#include<iostream>
#include<concepts>
#include<vector>
using namespace std;

/*
auto sum(int a, double b){
    return a + b;
}

int main(){
    auto result = sum(5, 4);
    cout<< result;
}
*/

/*
int sum(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int operation(int a, int b, int fun(int, int)){ //by reference how?
    return (fun(a, b));
}

int main(){
    cout<< operation(4, 5, sub);
}
*/

/*
template<typename T>

concept Integral = integral<T>;
template<Integral T>
void print(T value){
    cout<< value;
}
int main(){
    print(5);
    //print(3.14);
}
*/

int main(){
    vector<int> ibad = {1, 2, 3, 4, 5};
    for(auto& C : ibad){
        cout<< C;
    }
}