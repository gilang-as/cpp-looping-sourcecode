#include<iostream>
 using namespace std;
 
 int main(){
 cout<<"Selamat Mencoba\n";
 cout << "https://github.com/gilang-as\n"; 
int size=0;
cout << "Masukkan panjang yang dibutuhkan : ";
cin>>size;
for(int i=0; i<size; i++){
     for(int j=0; j<size; j++){
	          if(i<=j)
               cout << "*";
          else
               cout << " ";
}
     cout<<endl;
}
}
