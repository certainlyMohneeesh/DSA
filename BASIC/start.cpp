#include <iostream>
#include <string>
using namespace std;
int main() {
    string favouriteCompound;
    cout << "what is your favourite compound" << endl;
    getline(cin, favouriteCompound);
    if (favouriteCompound == "H2O") {
        cout << "ohh you like water" << endl;
    }
    else {
        cout << "ohh you don't like water" << endl;
        if (favouriteCompound == "NaCl") {
            cout << "ohh you like salt" << endl;
        }
        else if (favouriteCompound == "C6H12O6") {
            cout << "ohh you like glucose" << endl;
        }
        else if (favouriteCompound == "C2H5OH") {
            cout << "ohh you like ethanol" << endl;
        }
        else if (favouriteCompound == "C3H8") {
            cout << "ohh you like propane" << endl;
        }
        else if (favouriteCompound == "C4H10") {
            cout << "ohh you like butane" << endl;
        }
        else if (favouriteCompound == "C2H4") {
            cout << "ohh you like ethylene" << endl;
        }
        else if (favouriteCompound == "C3H6") {
            cout << "ohh you like propylene" << endl;
        }
        else if (favouriteCompound == "C2H2") {
            cout << "ohh you like acetylene" << endl;
    }
}
    cout << "your favourite compound is " << favouriteCompound << endl;
    return 0;
}