#include<iostream>
#include<conio.h>
#include<string.h>
#include<windows.h>
#define MAX_QUEUE 10
using namespace std;
struct QUEUE {
    int depan, belakang;
    char data[MAX_QUEUE][50];
}antri;
void inisialisasi(){
    antri.depan=antri.belakang=-1;
}
bool ISEMPTY(){
    return antri.belakang==-1;
}
bool ISFULL(){
    return antri.belakang == MAX_QUEUE - 1;
}
void ENQUEUE(char d[]){
    if (ISFULL()){
        cout<<"ANTRIAN SUDAH PENUH\n";
    }else{
        if(ISEMPTY()){
            antri.depan=antri.belakang = 0;
        }else{
            antri.belakang++;
        }
        strcpy(antri.data[antri.belakang],d);
        cout<<"Data berhasil ditambahkan ke antrian.\n";
    }
    cin.get();
}
void DEQUEUE(){
    if(ISEMPTY()){
        cout<<"ANTRIAN KOSONG!\n";
    }else{
        cout<<"Data yang keluar ="<<antri.data[antri.depan]<<endl;
        for(int i= antri.depan; i< antri.belakang; i++){
            strcpy(antri.data[i],antri.data[i+1]);
        }
        antri.belakang--;
        if(antri.belakang<antri.depan){
            antri.depan=antri.belakang=-1;
        }
    }
    cin.get();
}
void tampil(){
    if (ISEMPTY()){
        cout<<"ANTRIAN KOSONG\n";
    }else{
        cout<<"DATA DALAM ANTRIAN";
        for(int i =antri.depan;i<=antri.belakang;i++){
            cout<<"-"<<antri.data[i]<<endl;
        }
    }
    cin.get();
}
void clear(){
    antri.depan=antri.belakang=-1;
    cout<<"Antrian telah dikosongkan.\n";
    cin.get();
}
int main(){
    int pil;
    char dt[50];
    inisialisasi();
    do{
        system("cls");
    cout<<"         PROGRAM QUEUE(antrian)\n";
    cout<<"FIRST IN FIRST OUT (fifo)\n";
    cout<<"___________________\n";
    cout<<"MENU\n";
    cout<<"1. ENQUEUE (TAMBAH DATA)\n";
    cout<<"2. DEQUEUE (Keluarkan Data)\n";
    cout<<"3. CETAK (Tampilkan ISI ANTRIAN)\n";
    cout<<"4. CLEAR (Kosongkan Antrian)\n";
    cout<<"5. KELUAR\n";
    cout<<"Masukan Pilihaaan anda (1-5):";cin>>pil;
    cin.ignore();
    switch (pil){
        case 1:
        cout <<"MASUKAN DATA:";cin.getline(dt,50);ENQUEUE(dt);
        break;
        case 2: DEQUEUE();
        break;
        case 3: tampil();
        break;
        case 4: clear();
        break;
        case 5: cout<<"KEluar dari program.\n";
        cin.get();
    }
    
    }while (pil !=5);
    return 0;
}
