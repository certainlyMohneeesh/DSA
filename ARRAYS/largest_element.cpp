#include <iostream>
#include <string>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    string grade;
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks! Please enter marks between 0 and 100." << endl;
        return 1;
    }

    if (marks < 25) {
        grade = "F";
    }
    else if (marks < 45) {
        grade = "E"; 
    }
    else if (marks < 50) {
        grade = "D";
    }
    else if (marks < 60) {
        grade = "C";
    }
    else if (marks < 80) {
        grade = "B";
    }
    else {
        grade = "A";
    }

    cout << "Grade: " << grade << endl;
    return 0;
}
