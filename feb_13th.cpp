#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* link;
};

class Stack{
    Node* top;

    public:
    Stack() : top(NULL) {}

    void push(int val){
        Node* ptr = new Node();
        ptr -> data = val;
        ptr -> link = top;
        top = ptr;
    }

    void pop(){
        Node* ptr = top;
        top = top -> link;
        delete(ptr);
    }

    void show(){
        if(isEmpty()){
            cout<<"The Stack is empty\n";
        } else{
            cout<<"The data stored is: " << top -> data << endl;
            //cout<<"The link to this node is the address value: " << top -> link << endl;
        }
    }

    bool isEmpty(){
        return top == NULL;
    }
};

int main(){
    Stack obj;
    obj.show();
    obj.push(10);
    obj.show();
}