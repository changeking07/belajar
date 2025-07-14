#include <iostream>
using namespace std;
int main(){
	int nilai[5];
	for(int i=0;1<5;i++){
		cout<<"masukan nilai ke-"<<i+1<<":";
		cin>>nilai[i];
	}
	cout<<"nilai yang kamu masukan:";
	for(int i=0; i<5;i++){
		cout<<nilai[i]<<"";
	}
	return 0;
}


