// Three in one: Describe how you could use a single array to implement three MyStacks
// Stacks are LiFo 
// has the following operations: pop, push, peek, isEmpty

/*
    For an array to hole 3 stacks, you need some sort of delimiter. In my case, I choose -1 and only allow positive numbers in the stack. 
    YOu could also accomplish this by keeping a reference to the last node in each stack and only appendNext to them.
*/

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
        void displayItems(int);
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

void MyStack::displayItems(int section) {
    int counter = 0;

    struct Node* ptr;
    if(top == NULL) {
        return;
    }
    ptr = top;
    while(ptr != NULL) {
        if(ptr->data == -1) {
            ++counter;
        }
        if(counter == section) {
            cout << ptr -> data << " ";
        } else if(counter > section) {
            return;
        }
        
        ptr = ptr->next;
    }
}


int main(){
    //declare object
    MyStack stk;
    stk.push(12);
    stk.push(13);
    stk.push(14);
    stk.push(43);
    stk.push(-1);
    stk.push(12);
    stk.push(13);
    stk.push(14);
    stk.push(25);
    stk.push(-1);
    stk.push(12);
    stk.push(13);
    stk.push(14);
    stk.push(92);

    
    stk.displayItems(0);

    return 0;
     
}