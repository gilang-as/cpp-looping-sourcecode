#include<iostream>
using namespace std;

int main(){
cout<<"Selamat Mencoba\n";
 cout << "https://github.com/gilang-as\n";  
 int length=0;
 cout << "Masukkan panjang yang dibutuhkan : ";
 cin>>length;
 cout << "\n\n";
 for(int i=length, k=0; i>=0; i--, k++){
  for(int j=0; j<length+k; j++){
   if(j>i)
    cout << "*";
   else
    cout << " ";
  }
  cout<<endl;
 }
 for(int i=1, k=length; i<length; i++, k--) {
  for(int j=0; j<length+k-1; j++)  {
   if(i<j)
    cout << "*";
   else
    cout << " ";
  }
  cout<<endl;
 }
}
