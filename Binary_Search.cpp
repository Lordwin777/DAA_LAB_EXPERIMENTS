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

    int l = 0;
    int r = n - 1;
    int pos = -1;

    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == key) {
            pos = m;
            break;
        }
        if (a[m] < key) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    cout << pos;

    delete[] a;
    return 0;
}
