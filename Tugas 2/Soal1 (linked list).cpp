#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
    string nama;
    int nilai;
    Node* next;
};

Node* head = nullptr;

void insertAtBeginning(const string& nama, int nilai) {
    Node* newNode = new Node;
    newNode->nama = nama;
    newNode->nilai = nilai;
    newNode->next = head;
    head = newNode;
}

void printList() {
    Node* current = head;
    cout << endl << "Daftar Siswa:\n";
    while (current != nullptr) {
        cout << "Nama: " << current->nama << ", Nilai: " << current->nilai << endl;
        current = current->next;
    }
}

int main() {
    int pilihan;
    do {
        cout << "1. Tambah data siswa\n";
        cout << "2. Tampilkan semua data siswa\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;
        cin.ignore();
        if (pilihan == 1) {
            string nama;
            int nilai;
            cout << endl << "Nama siswa: ";
            getline(cin, nama);
            cout << "Nilai: ";
            cin >> nilai;
            insertAtBeginning(nama, nilai);
        } else if (pilihan == 2) {
            printList();
        }
    } while (pilihan != 0);

    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    return 0;
}
