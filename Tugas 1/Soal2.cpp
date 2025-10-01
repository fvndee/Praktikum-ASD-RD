#include <iostream>
using namespace std;

int opMatematika (int *x, int y, int *z) {
    *x = 0;
    *z = 1;
    
    for(int i = 1; i <= y; i++) {
        *x += i * i;
        *z *= (2 * i - 1);
    }
    return *x, *z;
}

int main () {
    int a, b, n;
    cout << "Masukkan Angka nya: ";
    cin >> n;

    opMatematika(&a, n, &b);
    cout << "a = " << a << " b = " << b << endl;
}