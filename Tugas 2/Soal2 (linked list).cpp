#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
    int nilai;
    Node* next;
};

Node* head = nullptr;

void insertAtBeginning(int nilai) {
    Node* newNode = new Node;
    newNode->nilai = nilai;
    newNode->next = head;
    head = newNode;
}
void printAscending(){
    vector<int> values;
    Node* current = head;
    while(current != nullptr){
        values.push_back(current->nilai);
        current = current->next;
    }
    
    sort(values.begin(), values.end());
    
    cout<< endl << "Data nilai mahasiswa dalam urutan Ascending : ";
    for (int val : values) {
        cout<<val<<" -> ";
    }
    cout<<""<<endl;
}

int main() {
    int pilihan;
    do {
        cout << endl << "1. Tambah data nilai mahasiswa\n";
        cout << "2. Tampilkan semua data mahasiswa dengan urutan tersorting (ascending)\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;
        cout << endl;
        cin.ignore();
        if (pilihan == 1) {
            string nama;
            int nilai;
            cout << "Nilai: ";
            cin >> nilai;
            cout << endl;
            insertAtBeginning(nilai);
        } else if (pilihan == 2) {
            printAscending();
        }
    } while (pilihan != 0);

    return 0;
}
