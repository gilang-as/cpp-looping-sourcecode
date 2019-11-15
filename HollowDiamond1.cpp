#include<iostream>
using namespace std;
int main(){
 cout<<"Selamat Mencoba\n";
 cout << "https://github.com/gilang-as\n";  
 int length=0;
 cout << "Masukkan panjang yang dibutuhkan : ";
 cin>>length;
 cout << "\n\n";
 for(int i=0, k=length, l=length; i<length; i++, k++, l--)
 {
  for(int j=0; j<2*length; j++)
  {
   if(j==k || j==l)
    cout << "*";
   else
    cout << " ";
  }
  cout<<endl;
 }
 for(int i=0, k=0, l=2*length; i<=length; i++, k++, l--)
 {
  for(int j=0; j<=2*length; j++)
  {
   if(j==k || j==l)
    cout << "*";
   else
    cout << " ";
  }
  cout<<endl;
 }
}
