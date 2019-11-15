#include <iostream>
#include <stdlib.h>
#include <string.h>
 
using namespace std;
 
int main()
{
    int i, n, odd[50];
    char *s[50];
    const char spasi = 177;
    const char diamond = '*';
 cout<<"Selamat Mencoba\n";
 cout << "https://github.com/gilang-as\n"; 
    cout << "Masukkan ukuran : ";
    cin >> n;
     
    for (i=1; i<=n; i++) odd[i-1] = 2*i-1;
     
    for (i=0; i<n; i++)
    {
        s[i] = new char[odd[n-1]+3];
        memset(s[i], spasi, odd[n-1]+2);
        memset(s[i]+odd[n-1]+3, '\0', 1);
        memset(s[i]+n-i, diamond, odd[i]);
 
        s[2*n-i-2] = new char[odd[n-1]+3];
        memset(s[2*n-i-2], spasi, odd[n-1]+2);
        memset(s[2*n-i-2]+odd[n-1]+3, '\0', 1);
        memset(s[2*n-i-2]+n-i, diamond, odd[i]);    
    }
     
    for (i=0; i<2*n-1; i++)
    {
        cout << s[i] << endl ;
        delete s[i];
    }
    return 0;
}
