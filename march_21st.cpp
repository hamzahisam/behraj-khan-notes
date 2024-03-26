#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
template<typename T>

T fun(T x){
    return x * x;
}

template<typename T>

T fun(T x){
    return x * x * x;
}

int main(){
    cout<< fun(5) << endl;
    cout<< fun(5.2);
}
*/

/*
template<typename T>

class cal{

    public:

T sum(T a, T b){
    return a + b;
}

T sub(T a, T b){
    return a - b;
}

T mutil(T a, T b){
    return a * b;
}

T div(T a, T b){
    if(b == 0){
        cout<< "Error";
    } else{
        return a / b;
    }
}

T my_max(T a, T b){
    if(a > b){
        return a;
    } else{
        return b;
    }
}
};

int main(){
    cal<int> obj;
    cout<< obj.sum(4, 5) << endl;

    cal<double> obj1;
    cout<< obj1.sub(4.2, 1.8);
}
*/
/*
    template<typename T, typename Op>

    T math_operation(T a, T b, Op op){
        return op(a, b);
    }

    vector<int> num = {2, 3, 5, 4};

    auto sum = [](auto a, auto b){
        cout << a + b;
    };

int main(){
    cout<< math_operation(4, 5, sum);
}
*/

template<typename T>

T swap(T a, T b){
    T temp;
    temp = a;
    a = b;
    b = temp;
    return a;
}

int main(){
    cout<< swap(5, 4);
}