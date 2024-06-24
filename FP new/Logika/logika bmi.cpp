#include <iostream>

using namespace std;

float tinggi, berat, hasil;

int main(){
	cout<<"Masukkan tinggi (m) : ";
	cin>>tinggi;
		cout<<"Masukkan berat (kg) : ";
	cin>>berat;
	
	hasil=berat/(tinggi*tinggi);
	cout<<"Hasil BMI : "<<hasil<<endl;
	if (hasil <18.5){
		cout<<"Kurus";
	} else if (hasil >=18.5 && hasil<25){
		cout<<"Normal";
	} else if (hasil >=25 && hasil<30){
		cout<<"Kelebihan berat badan";
	} else {
		cout<<"Obesitas";
	}
return 0;
}
