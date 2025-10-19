#include <bits/stdc++.h>
using namespace std;

class twoStack{
    int *arr;
    int size;
    int top1;
    int top2;
    int count = 0;

public:

    void printArray() {
        cout << "Stack 1 contents: [ ";
        for (int i = 0; i <= top1; ++i) {
            cout << arr[i];
            if (i != top1) cout << ", ";
        }
        cout << " ]" << endl;

        cout << "Stack 2 contents: [ ";
        for (int i = size - 1; i >= top2; --i) {
            cout << arr[i];
            if (i != top2) cout << ", ";
        }
        cout << " ]" << endl;
    }

    twoStack(int s){
        this -> size = s;
        top1 = -1; 
        top2 = s;
        arr = new int[s];
    }

    void push1 (int num){
        if (top2-top1 > 1){
            top1++;
            arr[top1] = num;
            count++;
            cout << arr[top1] << " is pushed in the stack" << endl;
        }
        else cout << "Stack Overflow" << endl;
    }
    void push2(int num) {
        if (top2 - top1 > 1) {
            top2--;
            arr[top2] = num;
            count++;
            cout << arr[top2] << " is pushed in the second stack" << endl;
        }
        else cout << "Stack Overflow" << endl;
    }

    int pop1(){
        if (top1 >= 0){
            int ans = arr[top1];
            cout << ans << " is popped from the first stack" << endl;
            top1--;
            count--;
            return ans;
        }
        else {
            cout << "Stack Underflow (first stack)" << endl;
            return -1;
        }
    }

    int pop2(){
        if (top2 < size){
            int ans = arr[top2];
            cout << ans << " is popped from the second stack" << endl;
            top2++;
            count--;
            return ans;
        }
        else {
            cout << "Stack Underflow (second stack)" << endl;
            return -1;
        }
    }

    int sizeOfArray(){
        cout << "Current total elements in both stacks: " << count << endl;
        return count;
    }
};

int main(){
    twoStack s(10);

    cout << "--- Push Operations ---" << endl;
    s.push1(1);
    s.sizeOfArray();
    s.push1(2);
    s.sizeOfArray();
    s.push1(3);
    s.sizeOfArray();
    s.push2(4);
    s.sizeOfArray();
    s.push2(5);
    s.sizeOfArray();

    cout << "\n--- Pop Operations ---" << endl;
    s.pop1();
    s.sizeOfArray();
    s.pop2();
    s.sizeOfArray();

    cout << "\n--- Final State ---" << endl;
    s.sizeOfArray();
    s.printArray();

    return 0;
}