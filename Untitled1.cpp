#include <iostream>
using namespace std;

int main() {
    string nama;
    int umur;

    cout << "Masukkan nama kamu: ";
    getline(cin, nama);  // Menerima input nama lengkap

    cout << "Masukkan umur kamu: ";
    cin >> umur;

    cout << "\nHalo, " << nama << "! Umur kamu " << umur << " tahun." << endl;

    return 0;
}

