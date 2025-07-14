#include <iostream>
using namespace std;
int main (){
	string makanan[5]={"ayam","pizza","mie","ikan","anggur"};
	
	for(int i=0;i<5;i++){
		cout<<"makanan ke-"<< i+1<<":"<<makanan[i]<<endl;	
	}
	return 0;
}
