#include <iostream>
#include <string>
using namespace std;

int main(){
	
//INPUT �SLEMLER�	
/*	
	string isim;
	string soyisim;
	
	cout<<"isminizi giriniz: ";
	cin>>isim;
	
	cout<<"soyadinizi giriniz: ";
	cin>>soyisim;
	
	cout<<"Girilen Isim: "<<isim<<endl;
	cout<<"Girilen Soyisim: "<<soyisim;
	*/
	
//�NPUT SAY�SAL �SLEMLER 
	
	int ilksayi,ikincisayi,topla,cikar,carp,bol,islem;
	cout<<"ilk sayiyi giriniz: ";
	cin>>ilksayi;
	cout<<"ikinci sayiyi giriniz: ";
	cin>>ikincisayi;
	
	topla=ilksayi+ikincisayi;
	cikar=ilksayi-ikincisayi;
	carp=ilksayi*ikincisayi;
	bol=ilksayi/ikincisayi;
	
	cout<<"toplami: "<<topla<<endl;
	cout<<"cikarma: "<<cikar<<endl;
	cout<<"carpma: "<<carp<<endl;
	cout<<"bol: "<<bol;

}
