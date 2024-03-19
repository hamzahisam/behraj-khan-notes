#include<iostream>
using namespace std;

/*
class ibad{

};

template<typename T> //The compiler applies the typename most suitable at runtime

T sum(T a, T b){
    return a + b;
}

template<typename T>

T sub(T a, T b){
    return a - b;
}

template<typename T>

T mutil(T a, T b){
    return a * b;
}

template<typename T>

T div(T a, T b){
    if(b == 0){
        cout<< "Error";
    } else{
        return a / b;
    }
}

template<typename T>

T my_max(T a, T b){
    if(a > b){
        return a;
    } else{
        return b;
    }
}

int main(){
    cout<< sum('a', 'b') << endl;
}
*/

template<typename T>

T my_max(T a, T b, T c){
    if(a > b && a > c){
        return a;
    } else if(b > a && b > c){
        return b;
    } else{
        return c;
    }
}

int main(){
    cout<< my_max(54646.8407, 76.899999, 81.91849018349181984391);
}