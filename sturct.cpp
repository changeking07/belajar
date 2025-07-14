#include <iostream>
using namespace std;
struct mahasiswa{
	string nama;
	int umur;
	float ipk;
};
	int main(){
		mahasiswa mhs1;
		cout<<"masukan nama:";cin>>mhs1.nama;
		cout<<"masukan umur:";cin>>mhs1.umur;
		cout<<"masukan IPK:";cin>>mhs1.ipk;
		
		cout<<"DATA Mahasiswa";
		cout<<"nama:"<<mhs1.nama<<endl;
		cout<<"umur:"<<mhs1.umur<<endl;
		cout<<"IPK:"<<mhs1.ipk<<endl;
		
		return 0;
	}
