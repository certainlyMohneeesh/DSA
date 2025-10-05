#include <bits/stdc++.h>
using namespace std;

void bubble(vector<int> &v, int n) {
    for (int i = 0; i < n - 1; i++) for (int j = i + 1; j < n; j++) if (v[i] > v[j]) {
        swap(v[i], v[j]);
        for (int k = 0; k < 7; k++) cout << v[k] << " ";
        cout << "\n";
    }
}

int main () {
    srand(time(0));
    vector<int> v;
    for (int i = 0; i < 7; i++) v.push_back(rand() % 100 - 50);
    bubble(v,7);
    return 0;
}