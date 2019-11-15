#include<iostream>
#include<Windows.h>
using namespace std;

void fan1(const int size);
void fan2(const int size);
int main(){
 int size, time;
cout<<"Selamat Mencoba\n";
 cout << "https://github.com/gilang-as\n"; 
 cout<< "Masukkan ukuran kipas : " ;
 cin>>size;
 cout<< "Masukkan Perdetik kipas berputar : " ;
 cin>>time;
 system("cls");
 for(int i=0 ; i<2*time ; i++){
  fan1(size);
  Sleep(500);
  system("cls");
  fan2(size);
  Sleep(500);
  system("cls");
 }
 return 0;
}


void fan1 (const int size){
 for(int i=0 ; i<=size ; i++){
  for(int j=0 ; j<=i ; j++){
   if(i!=size){
    if(j==0 || j==i)
     cout<< "* ";
    else
     cout<<"  ";
   }else if (i==size )
     cout<< "* ";
  }
  for(int spaces=i ; spaces<size ; spaces++)
    cout<<"  ";
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
 for(int m=0 ; m<=size ; m++){
  for(int spaces1=m ; spaces1<size ; spaces1++)
    cout<<"  ";
  for(int n=0; n<=m ; n++){
   if(m==size)
    cout<<"* ";
   else 
    if(n==0 || n==m)
     cout<<"* ";
    else 
     cout<<"  ";
  }
  for(int spaces1=0 ; spaces1<m ; spaces1++)
    cout<<"  ";
  for(int n=m; n<=size; n++){
   if(m==0)
    cout<<"* ";
   else
    if(n==m || n==size)
     cout<<"* ";
    else 
     cout<<"  ";
  }
   cout<<endl; 
 }
}
void fan2 (const int size){
 for(int i=0 ; i<=size ; i++){
  for(int j=0 ; j<i ; j++)
   cout<<"  ";
  for(int spaces=i ; spaces<=size ; spaces++){
   if(i==0)
    cout<<"* ";
   else
    if(spaces==i || spaces==size)
     cout<<"* ";
    else 
     cout<<"  ";
  }
  for(int j=i ; j<size ; j++)
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
  cout<<endl;
 }
 for(int m=0 ; m<=size ; m++){
  for(int spaces1=m ; spaces1<=size ; spaces1++){
   if (m==0)
    cout<<"* ";
   else
    if(spaces1==m || spaces1==size)
     cout<<"* ";
    else
     cout<<"  ";
  }
  for(int n=0; n<m ; n++)
  cout<<"  ";
  for(int spaces1=0 ; spaces1<=m ; spaces1++){
   if(m==0 || m==size)
    cout<<"* ";
   else
    if(spaces1==0 || spaces1==m)
     cout<<"* ";
    else 
     cout<<"  ";
  }
 cout<<endl; 
 }
}
