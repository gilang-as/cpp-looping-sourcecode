#include<iostream>
using namespace std;

int main(){
 cout<<"Selamat Mencoba\n";
 cout << "https://github.com/gilang-as\n"; 
int size=0;
cout << "Masukkan panjang yang dibutuhkan : ";
cin>>size;
cout << "\n\n";
for(int i=0 ; i<=size ; i++){
   for(int j=0 ; j<=i ; j++){
   if(i!=size){
     if(j==0 || j==i)
        cout<< "* ";
     else
        cout<<"  ";
   }
   else if (i==size )
     cout<< "* ";
}
  for(int spaces=i ; spaces<size ; spaces++)
     cout<<"  ";
  cout<<endl;
 }
}
