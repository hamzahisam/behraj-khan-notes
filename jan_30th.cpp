#include<iostream>
#include<stack>
using namespace std;

class MyStack{
    stack<int> mystack;

    public:
    void push(int value){
        mystack.push(value);
    }

    int pop(){
    if(!isEmpty()){
        int topValue = mystack.top();
        mystack.pop();
        return topValue;

    } else {
        cout << "I don't like OOP";
        return 0;
    }
}


    bool isEmpty(){
        return mystack.empty();
    }

    int top(){
        if(!mystack.empty()){
            return mystack.top();

        }else{
            return 0;
        }
    }

    size_t size(){
        return mystack.size();
    }
};

int main(){
    MyStack s1;
    s1.push(10);
    s1.push(20);
    cout<< s1.top();
    s1.pop();
    cout<< s1.top();   // Yun to tum Sayyid bhi, mirza bhi ho, afghan bhi ho
                       // Tum sabhi kuch ho, batao to musalman bhi ho?
}