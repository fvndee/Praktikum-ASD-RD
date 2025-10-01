#include <iostream>
using namespace std;

void tukarNilai(int *arr, int n) {
    int *start = arr;
    int *end = arr + n - 1;

    for (int i = 0; i < n / 2; ++i) {
        int temp = *(start + i);
        *(start + i) = *(end - i);
        *(end - i) = temp;
    }
}

int main() {
    int n;
    cout << "Masukkan ukuran array: ";
    cin >> n;
    
    int *arr = new int[n];
    cout << "Masukkan elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> *(arr + i);
    }

    tukarNilai(arr, n);

    cout << "Array setelah dibalik:\n";
    for (int i = 0; i < n; ++i) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    return 0;
}