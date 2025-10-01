#include <iostream>
using namespace std;

void hitungTotalGanjil (int *x, int y) {
    *x = 0;
    for(int i = 1; i <= y; i++) {
        if(i % 2 != 0) {
            *x += i;
        }
    }
}

int main () {
    int ganjil, n;
    cout << "Masukkan Angka nya: ";
    cin >> n;
    
    hitungTotalGanjil(&ganjil, n);
    cout << "Total Bilangan Ganjil dari 1 sampai " << n << " adalah " << ganjil << endl;
}