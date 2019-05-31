// Three in one: Describe how you could use a single array to implement three MyStacks
// Stacks are LiFo 
// has the following operations: pop, push, peek, isEmpty

#include <iostream>
using namespace std;
#define SIZE 5

class MyStack {

    private:
        int num[SIZE];
        int top;

    public:
        MyStack();
        int push(int);
        int pop();
        bool isEmpty();
        bool isFull();
        void displayItems();
}; 

MyStack::MyStack() {
    top = -1;
}

bool MyStack::isEmpty() {
    if(top==-1)
        return true;
    return false;
}

bool MyStack::isFull() {
    if(top == (SIZE - 1))
        return true;
    return false;
}

int MyStack::push(int n) {
    if(isFull()) {
        return 0;
    }
    ++top;
    num[top] = n;
    return n;
}

int MyStack::pop() {
    int temp;
    if(isEmpty()) {
        return 0;
    }
    // this doesn't actually delete the item though. just changes what the "top" is...
    temp = num[top];
    --top;
    return temp;
}

void MyStack::displayItems() {
    int i; //for loop
    cout<<"STACK is: ";
    for(i=(top); i>=0; i--)
        cout<<num[i]<<" ";
    cout<<endl;
}


int main(){
    //declare object
    MyStack stk;
    int choice, n,temp;
     
    return 0;
     
}