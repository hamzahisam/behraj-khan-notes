#include<iostream>
#include<stdexcept>
using namespace std;

class myStack{
    static const int max_Size = 5;
    int arr[max_Size];
    int top;

    public:
    myStack(): top(-1){

    }

    void push(int val){
        if(isFull()){
            throw overflow_error("STACK FULL!!!");
        } else{
            top += 1;
            arr[top] = val;
        }
    }

    int pop(){
        if(isEmpty()){
            throw underflow_error("STACK EMPTY!!!");
        }
        return top -= 1;
    }

    bool isFull(){
        return top == max_Size - 1;
    }

    bool isEmpty(){
        return top == -1;
    }

    size_t size(){
        return top + 1;
    }

    int front(){
        if(isEmpty()){
            throw underflow_error("STACK EMPTY!!!");
        } 
        return arr[top];
    }
};

int main(){
    myStack obj;
    obj.push(10);
    cout<< obj.size() << endl;
    cout<< obj.front();
}