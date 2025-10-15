#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
//Stack imolementation using Linked Lists
class Stack {

    //pointer to top node
    Node* top;
    int count = 0;

    public:
    Stack(){
        //initially stack is empty 
        top = NULL;
    }

    void push(int x){
        Node* tmp = new Node(x);
        tmp->next = top;
        top = tmp;

        count++;
    }

    int pop(){
        if (top == NULL) {
            cout << "Stack underflow" << endl;
            return -1;
            
        }
        else{
            Node* tmp = top;
            int val = tmp->data;
            top = top->next;

            count--;
            delete(tmp);
            return val;
        }
    }

    int peek(){
        if (top == NULL){
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty(){
        return top == NULL;
    }

    int size(){
        return count;
    }
};

int main() {
    Stack st;

    //pushing elements
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    //popping one element
    cout << "Popped: " << st.pop() << endl;

    //checking top element
    cout << "Top element: " << st.peek() << endl;

    //checking if stack is empty 
    cout << "Is stack empty: " << (st.isEmpty() ? "Yes" : "No") << endl;

    //checking current size 
    cout << "Current size of stack: " << st.size() << endl;

    return 0;
}
