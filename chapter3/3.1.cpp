// Three in one: Describe how you could use a single array to implement three MyStacks
// Stacks are LiFo 
// has the following operations: pop, push, peek, isEmpty

#include <iostream>
using namespace std;
#define SIZE 5

struct Node {
    int data;
    struct Node *next;

};



class MyStack {

    private:
       struct Node* top = NULL;
    public:
        MyStack();
        void push(int);
        void pop();
        bool isEmpty();
        bool isFull();
        void displayItems();
}; 

MyStack::MyStack() {
    
}

bool MyStack::isEmpty() {
    if(top==NULL)
        return true;
    return false;
}

void MyStack::push(int n) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = n;
    newNode->next = top;
    top = newNode;
}

void MyStack::pop() {

    if(top == NULL)
        return;
    
    top = top->next;
}

void MyStack::displayItems() {
    struct Node* ptr;
    if(top == NULL) {
        return;
    }
    ptr = top;
    while(ptr != NULL) {
        cout << ptr -> data << " ";
        ptr = ptr->next;
    }
}


int main(){
    //declare object
    MyStack stk;
    stk.push(12);
    stk.push(13);
    stk.push(14);
    stk.push(15);
    stk.pop();
    stk.pop();
    
    stk.displayItems();

    return 0;
     
}