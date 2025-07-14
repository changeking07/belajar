#include <iostream>
using namespace std;
int main (){
	int nilai [5];
	int terbesar;
	
	for (int i =0;i <5;i++){
		cout<<"masukan nilai  ke-"<<i+1<<":";cin>>	nilai[i];
	}
	terbesar=nilai[0];
	
	for(int i=1; i<5   ;i++){
		if(nilai[i]>terbesar){
			terbesar = nilai[i];
		}
	}
	cout<<"nilai terbesar adalah:"<<terbesar<<endl;
	
	return 0;
	
}
