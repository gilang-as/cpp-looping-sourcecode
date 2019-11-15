#include<iostream>
using namespace std;

int main(){
cout<<"Selamat Mencoba\n";
 cout << "https://github.com/gilang-as\n";  
int size=0;
cout << "Masukkan panjang yang dibutuhkan : ";
cin>>size;
cout << "\n\n";
for(int i=0 ; i<=size ; i++) {
    for(int spaces1=i ; spaces1<size ; spaces1++)
         cout<<"  ";
    for(int j=0; j<=i ; j++){       
         if(i==size)
            cout<<"* ";
         else 
         if(j==0 || j==i)
            cout<<"* ";
         else 
            cout<<"  ";
}
for(int spaces1=0 ; spaces1<i ; spaces1++)
cout<<"  ";
cout<<endl; 
 }
return 0;
}
