#include<iostream>
#include<string.h>
using namespace std;
#define MAX_QUEUE 10

struct queue{
     int depan,belakang;
     char data[MAX_QUEUE][50];
}antri;
void inisialisasi(){
    antri.depan=antri.belakang=-1;
}
bool ISEMPTY (){
    return antri.belakang==-1;
}
bool ISFULL (){
    return antri.belakang==MAX_QUEUE-1;
}

void ENQUEUE (char d[]){
    if(ISFULL()){
        cout<<"Antrian Penuh\n";
    }else{
        if(ISEMPTY()){
            antri.depan=antri.belakang=0;
        }else{
            antri.belakang++;
        }
        strcpy(antri.data[antri.belakang],d);
        cout<<"data masuk"<<d<<endl;
    }
}
void tampil (){
    if(ISEMPTY()){
        cout<<"ANTRIAN KOSONG";
    }else{
        cout<<"MASUKAN DATA:\n";
        for(int i=antri.depan;i<=antri.belakang;i++){
            cout<<i<<","<<antri.data[i]<<endl;  
        }
    }
}
int main(){
    inisialisasi();
    ENQUEUE((char*)"BUDI");
    ENQUEUE((char*)"SINTA");
    ENQUEUE((char*)"dola");
    tampil();
    return 0;
}