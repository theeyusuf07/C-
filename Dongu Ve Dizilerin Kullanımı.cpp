#include <iostream>
#include <string>
using namespace std;

int main(){
	//D�NG� VE D�Z�LER�N KULLANIMI
/*	
	string isimler[]={"Ali","Samet","Kemal","Cemil"};
	for(int i=0;i<4;i++){
		cout<<isimler[i]<<endl;
		
		
	}
	
	*/
	//kullan�c�dan say� isteyip giricegi say�y� say� degiskenine atmak istesek 
	//ve kullan�c�dan girmek istedigi miktar� istesek ve biz bu say�lar�n toplam�n� yazd�rsak ��kan sonucu da ekrana yazd�r�yoruz
	
	
	int sayi;
	int toplam=0;
	cout<<"Girmek istediginiz sayi miktarini belirtiniz: ";
	cin>>sayi;
	int sayilar[sayi];
	for(int i=0;i<sayi;i++){
		cout<<i+1<<" .Sayisini Giriniz: ";
		cin>>sayilar[i];
		cout<<endl;
		
	}
	cout<<"Girdiginiz sayilar: \n";
	for(int i=0;i<sayi;i++){
		cout<<sayilar[i]<<endl;
		toplam+=sayilar[i]; //toplam=toplam+sayilar[i]
		
	}
	cout<<endl<<"Girdiginiz Sayilarin toplami: "<<toplam;
	
	
	
}
