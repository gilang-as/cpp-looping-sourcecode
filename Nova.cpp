#include<iostream>
using namespace std;

int main(){
cout<<"Selamat Mencoba\n";
 cout << "https://github.com/gilang-as\n"; 
 int size=0;
 cout << "Masukkan bilangan genap 2 sampai 10 : ";
 cin>>size;
 	if(size%2==0 && size<=10 && size!=0){
		int saaa=1;
		int sbbb=(size/2)+1;
		for(int a1=1; a1<=size; a1++){
			if(a1%2==1){
				for(int b1=a1; b1<=size; b1++){
					if(b1%2==1){
						cout << b1 << " ";
					}
				}
		   		for(int c1=1; c1<=size; c1++){
					if(c1%2==0){
						cout << c1 << " ";
					}
				}
				for(int d1=1; d1<=saaa; d1++){
					cout << " ";
				}
				for(int e1=1; e1<=saaa; e1++){
					cout << "* ";
				}
				for(int f1=1; f1<=saaa; f1++){
					cout << " ";
				}
				for(int g1=size; g1>=1; g1--){
					if(g1%2==0){
						cout << g1 << " ";
					}
				} 
				for(int h1=size; h1>=a1; h1--){
					if(h1%2==1){
						cout << h1 << " ";
					}
				} 
			  	cout << endl;
			  	saaa++;
			}
		 }
		for(int a2=1; a2<=size; a2++){
			if(a2%2==0){
			  	for(int b2=a2; b2<=size; b2++){
					if(b2%2==0){
						cout << b2 << " ";
					}
				}
				for(int d1=1; d1<=sbbb; d1++){
					cout << " ";
				}
				for(int e1=1; e1<=sbbb; e1++){
					cout << "* ";
				} 
				for(int f1=1; f1<=sbbb; f1++){
					cout << " ";
				}
				for(int g2=size; g2>=a2; g2--){
					if(g2%2==0){
						cout << g2 << " ";
					}
				}
			  	cout << endl;
			  	sbbb++;
		  	}
		 }
	}else{
		cout << "\n\nTidak Dapat Diproses\n";
		cout << "Bilangan Harus diatas 0 dan Genap tidak melebihi 10\n\n";
	}
}
