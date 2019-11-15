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
    for(int j=i ; j<=size ; j++){
       if(i==0)
          cout<< "* ";
       else 
          if(j==i || j==size)
             cout<<"* ";
          else
             cout<<"  ";
  }
   cout<<endl;
 }
return 0;
}
