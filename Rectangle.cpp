#include<iostream>
using namespace std;

int main(){
cout<<"Selamat Mencoba\n";
 cout << "https://github.com/gilang-as\n"; 
int length=0, width=0;
cout << "Masukkan Tinggi : ";
cin>>length;
cout << "Masukkan Panjang : ";
cin>>width;
for(int i=0; i<length; i++){
    for(int j=0; j<width; j++)
        cout << "*";
      cout<<endl;
}
}
