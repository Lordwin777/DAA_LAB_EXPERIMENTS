#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int key;
    cin >> key;

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            pos = i;
            break;
        }
    }

    cout << pos;

    delete[] a;
    return 0;
}
