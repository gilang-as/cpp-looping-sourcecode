#include<iostream>

using namespace std;
int main(){
 cout<<"Selamat Mencoba\n";
 cout << "https://github.com/gilang-as\n";  
 int height=0;
 cout << "Masukkan panjang yang dibutuhkan : ";
 cin>>height;
 cout << "\n\n";
 //for upper side
 for(int upperrows=0; upperrows<height; upperrows++)
 {
  for(int stars1=height; upperrows<stars1; stars1--)
   cout<<"*";
  for(int space1=0; space1<2*upperrows; space1++)
   cout<<" ";
  for(int stars2=height; upperrows<stars2; stars2--)
   cout<<"*";
  cout<<endl;
 }
 //for lower side
 for(int lowerrows=0, k=height; lowerrows<height-1; lowerrows++, k--)
 {
  for(int stars3=0; lowerrows>stars3-2; stars3++)
   cout<<"*";
  for(int j=0; j<height+k-3; j++)
  {
   if(lowerrows<j)
    cout << " ";
  }
  for(int stars3=0; lowerrows>stars3-2; stars3++)
   cout<<"*";
  cout<<endl;
 }
}
