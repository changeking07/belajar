#include <iostream>
using namespace std;
int main(){
	int nilai [5];
	int total =0;
	float rata;
	
	for (int i =0; i<2;i++){
		cout <<"masukan nilai ke-"<<":";cin>>nilai[i];
		total +=nilai[i];	
	}
	
	rata = total / 5.0;
	
	cout<<"Total nilai ="<<total<<endl;
	cout<<"Rata-rata ="<<rata<<endl;
	
	return 	0;
}
