#include <iostream>
#include <string>
using namespace std;

int main(){
	//FOR D�NG�S�
/*	

	// i 0 dan ba�las�n 10 a kadar tekrar etsin bu s�rece boyunca bir bir arts�n
	for(int i=0;i<10;i=i+1){
		if (i%2==0){
			cout<<i<<"bir cift sayidir"<<endl;
		}else{
			cout<<i<<"bir tek sayidir"<<endl;
		}
	}
	
	*/
	
	//kullan�c� bir say� girsin fakt�riyelini alal�m
	
	int sayi;
	int toplam=1;
	cout<<"Faktoriyelini almak istediginiz sayiyi giriniz: ";
	cin>>sayi;
	for(int i=1;i<=sayi;i++){
		toplam=toplam*i;
		
		
	}
	cout<<endl<<"Giridiginiz sayinin faktoriyeli: "<<toplam;
}
