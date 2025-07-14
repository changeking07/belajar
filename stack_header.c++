#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#define MAX_STACK 10
using namespace std;
struct STACK{
    int top;
    char data[10][MAX_STACK];
}tumpuk;
void inisialisasi (){
    tumpuk.top=-1;
}
bool ISFULL(){
    if (tumpuk.top==MAX_STACK-1) return true;
    else return false;
}
bool ISEMPTY(){
    if (tumpuk.top==-1)return true;
    else return false;
}
void PUSH(char d[MAX_STACK])
{
    if(ISFULL()){
        tumpuk.top++;
        strcpy(tumpuk.data[tumpuk.top],d);
    }
    else cout<<"TUMPUKAN SUDAH PENUH!\n";
    _getch();
}
void POP()
{
    if(ISEMPTY()){
        cout<<"Data yang termasuk =";
        cout<<tumpuk.data[tumpuk.top]<<endl;
        tumpuk.top--;
    }
    else cout<<"TUMPUKAN SUDAH KOSONG\n";
}
void tampil()
 {
    if(ISEMPTY())cout<<"TUMPUKAN KOSONG\n";
    else{
    cout<<"DATA YANG ADA DALAM TUMPUKAN ADALAH\n";
    for(int i=tumpuk.top;i>=0;i--)
    cout<<tumpuk.data[i]<<endl;
    _getch();
        }
 }
void clear(){
tumpuk.top=-1;}
int main()
{
    int pil;
    char dt[MAX_STACK];
    inisialisasi();
    do{
        "clrscr";
        cout<<"             TUMPUKAN \n";
        cout<<"LAST IN FIRST OUT (LIFO)\n";
        cout<<"_________________________\n";
        cout<<"MENU\n";
        cout<<"1. PUSH \n";
        cout<<"2. POP \n";
        cout<<"3. CETAK \n";
        cout<<"4. CLEAR \n";
        cout<<"5. keluar \n";
        cout<<"MASUKAN Pilihan Anda (1..5)";cin>>pil;
        switch(pil){
            case 1:{
                cout<<"masukan data :";
                cin>>dt;
                PUSH(dt);
                break;
            }
            case 2:POP();
            break;
            case 3:tampil();
            break;
            case 4:clear();
            break;
        }
        _getch();
     } while (pil!=5);
    
     return 0;

}
