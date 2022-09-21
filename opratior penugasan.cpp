#include <iostream>
using namespace std;
int main(){
	int angka;
	cin>>angka;
	cout << "angka sebelumnya "<<angka<<endl;
	
	angka += 2;
	cout<<"angka + 2 = "	<<angka<<endl;
	
	angka -= 2;
	cout<<"angka - 2 = "<<angka<<endl;
	
	angka *= 2 ;
	cout<<"angka * 2 = "<<angka<<endl;
	
	angka /= 2;
	cout<<"angka / 2 = "<<angka<<endl;
	
	angka %= 2;
	cout<<"angka % 2 = "<<angka<<endl;
	

	return 0;
	
}
