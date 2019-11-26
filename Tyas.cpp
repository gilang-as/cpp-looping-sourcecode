#include<iostream>
using namespace std;

int main(){
	cout<<"Selamat Mencoba\n";
	cout << "https://github.com/gilang-as\n"; 
	int total=0;
	int kebawah1a=1;
	int kebawah2a=5;
	int bawah1=1;
	int simpan1,simpan2;
	cout << "Masukkan ukuran : ";
	cin>>total;
	for(int a1=0; a1<total; a1++) {
		kebawah1a=kebawah1a+a1;
		cout<<kebawah1a;
		int samping1=a1;
		if(a1<(total-1)){
			int kesamping1=kebawah2a;
			simpan1 = kebawah2a;
			for(int b1=a1;b1<(total-1);b1++){
				cout << " "<< kesamping1;
				kesamping1=kesamping1+kesamping1+samping1;	
				samping1++;	
			}
			simpan2=bawah1;
			bawah1=bawah1+2;
			kebawah2a=kebawah2a+bawah1;
		}
		for(int c1=0;c1<=a1;c1++){
			cout<<" ";
		}
		for(int d1=0;d1<=a1;d1++){
			if(d1==a1){
				cout<<"*";
			}else{
				cout<<"*   ";
			}
		}
		for(int e1=0;e1<=a1-1;e1++){
			cout<<" ";
		}
		cout<<"| Selanjutnya";
		cout<<endl;
	}	
	int kebawah1b=kebawah1a;
	int kebawah2b=simpan1;
	int bawah2=simpan2;
	for(int a2=total;a2>0;a2--){
		cout<<kebawah1b;
		int samping2=a2-1;
		if(kebawah1b<29){
			int kesamping2=kebawah2b;
			for(int b2=a2;b2<(total);b2++){
				cout << " "<< kesamping2;
				kesamping2=kesamping2+kesamping2+samping2;
				samping2++;
			}
			kebawah2b=kebawah2b-bawah2;
			bawah2=bawah2-2;
		}
		for(int c2=0;c2<=a2-1;c2++){
			cout<<" ";
		}
		for(int d2=0;d2<=a2-1;d2++){
			if(d2==a2-1){
				cout<<"*";
			}else{
				cout<<"*   ";
			}
		}
		for(int e2=0;e2<=a2-2;e2++){
			cout<<" ";
		}
		cout<<"| Selanjutnya";
		kebawah1b=kebawah1b-a2+1;
		cout<<endl;
	}
}
