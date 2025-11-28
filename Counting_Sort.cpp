#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* a = new int[n];
    int mx = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > mx) {
            mx = a[i];
        }
    }

    int* cnt = new int[mx + 1];
    for (int i = 0; i <= mx; i++) {
        cnt[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cnt[a[i]]++;
    }

    for (int i = 0; i <= mx; i++) {
        while (cnt[i] > 0) {
            cout << i << " ";
            cnt[i]--;
        }
    }

    delete[] a;
    delete[] cnt;
    return 0;
}
