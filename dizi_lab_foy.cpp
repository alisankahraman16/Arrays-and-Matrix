#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;


void tersAl(int myDizi[],int uzunluk){
	for(int i = uzunluk-1 ; i>=0 ; i--){
		cout<<myDizi[i]<<endl;
	}
}
void kareAl(int myDizi[],int uzunluk){
	for(int i = 0 ; i<uzunluk ; i++){
		cout<<pow(myDizi[i],2)<<endl;
	}
}

void carpimTablosu(int myDizi[],int uzunluk){
	int secim;
	for(int i = 0; i < uzunluk ; i++){
		cout<<myDizi[i]<<endl;
	}
	cout<<"Carpim tablosunu cikarmak istediginiz dizi elemaninini seciniz:";
	cin>>secim;
	for(int i=1 ; i <= 10 ; i++ ){
		cout<<i<<"x"<<secim<<"="<<i*secim<<endl;
	}
}

void overload(int myDizi[], int uzunluk){
	cout<<"Postfix notasyonu: ";
	for(int i = 0 ; i < uzunluk ; i++){
		++myDizi[i];
		cout << ++myDizi[i] << " ";
	}
	
	cout<<endl;
	
	
	for(int i = 0; i < uzunluk; i++){
		myDizi[i]--;
		myDizi[i]--;
	}
	 
	cout<<"Prefix notasyonu: ";
	for(int i = 0 ; i < uzunluk; i++){
		--myDizi[i];
		cout<< --myDizi[i] << " "; 
	}
	cout<<endl;
}


void islemTablosu(int myDizi[],int uzunluk){
	int islem,index1,index2,toplam;
	cout<<"1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n";
	cout<<"Yapmak istediginiz islemi seciniz:";
	cin>>islem;
	switch(islem){
		case 1:
			for(int i = 0; i < uzunluk ; i++){
				cout<<myDizi[i]<<endl;
			}
			cout<<"islem yapilacak ilk dizi elemanini seciniz:";
			cin>>index1;
			cout<<"islem yapilacak ikinci dizi elemanini seciniz:";
			cin>>index2;
			toplam = myDizi[index1 -1] + myDizi[index2 -1];
			cout<<toplam<<endl;
			break;
		case 2:
			for(int i = 0; i < uzunluk ; i++){
				cout<<myDizi[i]<<endl;
			}
			cout<<"islem yapilacak ilk dizi elemanini seciniz:";
			cin>>index1;
			cout<<"islem yapilacak ikinci dizi elemanini seciniz:";
			cin>>index2;
			toplam = myDizi[index1 -1] - myDizi[index2 -1];
			cout<<toplam<<endl;
			break;
		case 3:
			for(int i = 0; i < uzunluk ; i++){
				cout<<myDizi[i]<<endl;
			}
			cout<<"islem yapilacak ilk dizi elemanini seciniz:";
			cin>>index1;
			cout<<"islem yapilacak ikinci dizi elemanini seciniz:";
			cin>>index2;
			toplam = myDizi[index1 -1] * myDizi[index2 -1];
			cout<<toplam<<endl;
			break;
		case 4:
			for(int i = 0; i < uzunluk ; i++){
				cout<<myDizi[i]<<endl;
			}
			cout<<"islem yapilacak ilk dizi elemanini seciniz:";
			cin>>index1;
			cout<<"islem yapilacak ikinci dizi elemanini seciniz:";
			cin>>index2;
			toplam = myDizi[index1 -1] / myDizi[index2 -1];
			cout<<toplam<<endl;
			break;
		default:
			cout<<"Boyle bir islem bulunamadi.";
			break;
			
	}
}


void faktoriyelAl(int myDizi[],int uzunluk){
	
	if(uzunluk == 0){
		cout<<"Dizi elemani bulunamadi lutfen tekrar eleman giriniz!";
		int islem;
		int Uzunluk;
		int myDizi[uzunluk];
		cout<<"Dizinin uzunlugunu giriniz:";
		cin>>uzunluk;
		for(int i = 0; i< uzunluk ; i++)
		{
  			cout<<"Dizinin elemanlarini giriniz:";
			cin>>myDizi[i];
		}
		for(int i = 0; i < uzunluk ; i++){
			cout<<myDizi[i]<<endl;
		}
	
		int fakt=1,eleman;
		for(int i= 0 ; i < uzunluk ; i++)
		{
  			cout<<myDizi[i]<<" ";
		}
		cout<<"Hangi elemanin faktoriyelini almak istiyorsunuz:";
		cin>>eleman;
		for(int i = 1 ; i<= myDizi[eleman-1] ; i++)
		{
			fakt = fakt * i;
		}
		cout<<"Dizinin "<<eleman<<" elemaninin faktoriyel degeri:"<<fakt;
	}
	else
	{
		int fakt=1,eleman;
		for(int i= 0 ; i < uzunluk ; i++)
		{
  			cout<<myDizi[i]<<" ";
		}
		cout<<"Hangi elemanin faktoriyelini almak istiyorsunuz:";
		cin>>eleman;
		for(int i = 1 ; i<= myDizi[eleman-1] ; i++)
		{
			fakt = fakt * i;
		}
		cout<<"Dizinin "<<eleman<<" elemaninin faktoriyel degeri:"<<fakt;
	}
}

void randDizi()
{
	int N,matrix[100][100];
	cout<<"NxN lik matrisin N sayisini giriniz:";
	cin>>N;
	for(int i=0 ; i<N ; i++)
	{
		for(int j=0 ; j<N ; j++)
		{
			matrix[i][j]=rand()%101;
			
		}
	}
	for(int i=0 ; i<N ; i++)
	{
		for(int j=0 ; j<N ; j++)
		{
			cout<<matrix[i][j]<<" ";
			
			
		}
		cout<<endl;
	}
}

int main(){
	
	
	
	int islem,Uzunluk;
	
	cout<<"Dizinin uzunlugunu giriniz:";
			cin>>Uzunluk;
			int dizi[Uzunluk];
			for(int i = 0; i< Uzunluk ; i++)
			{
				cout<<"Dizinin elemanlarini giriniz:";
				cin>>dizi[i];
			}
			
			
	while(true){
	
	cout<<"1-Ters Yazdir\n2-Kare Al\n3-Carpim Tablosu\n4-Hesapla\n5-overload\n6-Matris\n7-Cikis\n";
	
	cout<<"Bir islem seciniz:";
	cin>>islem;
	
	
	switch(islem){
		case 1:
			tersAl(dizi,Uzunluk);
			break;
		case 2:
			kareAl(dizi,Uzunluk);
			break;
		case 3:
			carpimTablosu(dizi,Uzunluk);
			break;
		case 4:
			islemTablosu(dizi,Uzunluk);
			break;
		case 5:
			overload(dizi,Uzunluk);
			break;
		case 6:
			randDizi();
			break;
		case 7:
			cout<<"Ýslemden cikis yapildi...\n";
			return 0;
			
			
	}
}

	

	
	
}
