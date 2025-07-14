#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>
#define MAX_STACK 10
using namespace std;

struct STACK {
    int top;
    char data[MAX_STACK][50]; // perbaiki ukuran
} tumpuk;

void inisialisasi() {
    tumpuk.top = -1;
}

bool ISFULL() {
    return tumpuk.top == MAX_STACK - 1;
}

bool ISEMPTY() {
    return tumpuk.top == -1;
}

void PUSH(char d[]) {
    if (!ISFULL()) {
        tumpuk.top++;
        strcpy(tumpuk.data[tumpuk.top], d);
        cout << "Data berhasil ditambahkan.\n";
    } else {
        cout << "TUMPUKAN SUDAH PENUH!\n";
    }
    _getch();
}

void POP() {
    if (!ISEMPTY()) {
        cout << "Data yang diambil = " << tumpuk.data[tumpuk.top] << endl;
        tumpuk.top--;
    } else {
        cout << "TUMPUKAN SUDAH KOSONG\n";
    }
    _getch();
}

void tampil() {
    if (ISEMPTY()) {
        cout << "TUMPUKAN KOSONG\n";
    } else {
        cout << "DATA YANG ADA DALAM TUMPUKAN ADALAH:\n";
        for (int i = tumpuk.top; i >= 0; i--) {
            cout << "- " << tumpuk.data[i] << endl;
        }
    }
    _getch();
}

void clear() {
    tumpuk.top = -1;
    cout << "Tumpukan telah dikosongkan.\n";
    _getch();
}

int main() {
    int pil;
    char dt[50];
    inisialisasi();

    do {
        system("cls"); // clear screen (khusus Windows)
        cout << "             TUMPUKAN\n";
        cout << "      LAST IN FIRST OUT (LIFO)\n";
        cout << "_______________________________\n";
        cout << "MENU\n";
        cout << "1. PUSH (Tambah Data)\n";
        cout << "2. POP  (Ambil Data)\n";
        cout << "3. CETAK (Lihat Isi Tumpukan)\n";
        cout << "4. CLEAR (Kosongkan Tumpukan)\n";
        cout << "5. KELUAR\n";
        cout << "Masukkan pilihan Anda (1..5): ";
        cin >> pil;
        cin.ignore(); // biar tidak lompat input

        switch (pil) {
            case 1:
                cout << "Masukkan data: ";
                cin.getline(dt, 50);
                PUSH(dt);
                break;
            case 2:
                POP();
                break;
            case 3:
                tampil();
                break;
            case 4:
                clear();
                break;
            case 5:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
                _getch();
        }
    } while (pil != 5);

    return 0;
}
