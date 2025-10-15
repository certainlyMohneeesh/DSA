#include <bits/stdc++.h>
using namespace std;

class Stack{
    // properties 
    public:
    int *arr;
    int top;
    int size;

    //function 
     Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if (size - top > 1){
            top++;
            arr[top] = element;
        }
        else {
            cout << "Stack is overflowed" << endl;
        }
    }

    void pop(){
        if (top >= 0){
            top--;
        }
        else{
            cout << "Stack is underflowed" << endl;
        }
    }

    int peek(){
        if(top >= 0) return arr[top];
        else {cout << "Stack is empty" << endl;
        return -1;
        }
        
    }


    bool isEmpty(){
        if (top == -1) {
        return true;
        cout << "Stack is empty" << endl;
    }
        else return false;
    }



};

int main() {


    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(39);
    
    cout << "The top element of the stack is: " << st.peek() << endl;

    st.pop();
    cout << "Now the top element of the stack is: " << st.peek() << endl;



    // stack <int> s; // using std::stack
    
    // //push operation 
    // s.push(18);
    // s.push(9);

    // //pop operation
    // s.pop();
    // // s.pop();
    
    // cout << "Printing top element: " << s.top() << endl;

    // if (s.empty())
    // cout << "Stack is empty" << endl;
    // else
    // cout << "Stack is not empty" << endl;

    // cout << "Size of stack is: " << s.size() << endl;
    return 0;
}