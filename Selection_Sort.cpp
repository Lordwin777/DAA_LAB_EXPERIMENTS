#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[idx]) {
                idx = j;
            }
        }
        int t = a[i];
        a[i] = a[idx];
        a[idx] = t;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    delete[] a;
    return 0;
}
