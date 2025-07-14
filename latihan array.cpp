#include <iostream>
using namespace std;
int main (){
	string makanan[5];
	for (int i=0;i<5;i++){
		cout<<"masukan makanan:"<<i+1<<":";cin>>makanan[i];
	}

	cout<<"\ndaftar makanan yang kamumasukin:\n";
	for(int i=0;i<5;i++){
		cout<<"-"<<makanan[i]<<endl;
	}
	return 0;
}
