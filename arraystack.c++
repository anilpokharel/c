#include <iostream>
using namespace std;

const int MAX = 100;
class Stack{
    private:
    int top;
    int data[MAX];

    public:
    Stack(){
        top = -1;
    }
    void push (int value){
        if(top == MAX -1){
            cout<<"Stack overflow! cannot push items"<<endl;
            return;
        }
        data[++top] = value;
    }
    int pop(){
        if(top == -1){
            cout<<"Stack is underflow! cannot pop items"<<endl;
            return -1;
        }
        return data[top--];
    }
    int peek(){
        if(top == -1 )   {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return data[top];
    }
    bool isEmpty(){
        return top == -1;
    }
    bool isFull(){
        return top == MAX -1;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Top Element"<<s.peek()<<endl;
    cout<<"Popped Element"<<s.pop()<<endl;
    cout<<"Top Element"<<s.peek()<<endl;
}

